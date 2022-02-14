
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitset {int dummy; } ;


 int FUNC_0 (int,int,struct bitset*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, struct bitset *VAR_2, int VAR_3)
{
 enum { NONE, NUM, DASH } VAR_4;
 int VAR_5;
 int VAR_6;
 char *VAR_7;

 VAR_4 = NONE;
 VAR_6 = VAR_5 = 0;
 for (VAR_7 = VAR_1; *VAR_7 != '\0';) {
  if (FUNC_3(*VAR_7)) {
   VAR_6 = FUNC_1(VAR_7);
   if (VAR_6 >= VAR_3)
    FUNC_2(VAR_0,
        "List entry %d exceeds maximum of %d",
        VAR_6, VAR_3 - 1);
   while (FUNC_3(*VAR_7))
    VAR_7++;
   switch (VAR_4) {
   case NONE:
    VAR_5 = VAR_6;
    VAR_4 = NUM;
    break;
   case DASH:
    for (; VAR_5 <= VAR_6; VAR_5++)
     FUNC_0(VAR_3, VAR_5, VAR_2);
    VAR_4 = NONE;
    break;
   case NUM:
   default:
    goto parserr;
   }
   continue;
  }
  switch (*VAR_7) {
  case ',':
   switch (VAR_4) {
   case NONE:
    break;
   case NUM:
    FUNC_0(VAR_3, VAR_6, VAR_2);
    VAR_4 = NONE;
    break;
   case DASH:
    goto parserr;
    break;
   }
   break;
  case '-':
   if (VAR_4 != NUM)
    goto parserr;
   VAR_4 = DASH;
   break;
  default:
   goto parserr;
  }
  VAR_7++;
 }
 switch (VAR_4) {
  case NONE:
   break;
  case NUM:
   FUNC_0(VAR_3, VAR_6, VAR_2);
   break;
  case DASH:
   goto parserr;
 }
 return;
parserr:
 FUNC_2(VAR_0, "Malformed list %s", VAR_1);
}
