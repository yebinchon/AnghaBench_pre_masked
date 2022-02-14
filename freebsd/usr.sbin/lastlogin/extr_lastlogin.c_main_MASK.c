
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {scalar_t__ ut_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int,char**,char*) ;
 struct utmpx* FUNC_3 () ;
 struct utmpx* FUNC_4 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct utmpx*) ;
 int FUNC_6 (struct utmpx*,int,int,int ) ;
 struct utmpx* FUNC_7 (struct utmpx*,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int,char**) ;
 int FUNC_17 (char*,char*) ;

int
FUNC_18(int VAR_8, char *VAR_9[])
{
 int VAR_10, VAR_11, VAR_12;
 struct utmpx *VAR_13, *VAR_14;

 VAR_8 = FUNC_16(VAR_8, VAR_9);
 if (VAR_8 < 0)
  FUNC_1(1);

 while ((VAR_10 = FUNC_2(VAR_8, VAR_9, "f:rt")) != -1) {
  switch (VAR_10) {
  case 'f':
   VAR_2 = VAR_3;
   break;
  case 'r':
   VAR_5 = -1;
   break;
  case 't':
   VAR_6 = VAR_7;
   break;
  default:
   FUNC_9();
  }
 }
 VAR_8 -= VAR_4;
 VAR_9 += VAR_4;

 FUNC_14("lastlogin-information");
 FUNC_15("lastlogin");

 if (VAR_8 > 0) {

  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   if (FUNC_8(VAR_1, VAR_2) != 0)
    FUNC_12(1, "failed to open lastlog database");
   if ((VAR_13 = FUNC_4(VAR_9[VAR_11])) == ((void*)0)) {
    FUNC_17("user '%s' not found", VAR_9[VAR_11]);
    continue;
   }
   FUNC_5(VAR_13);
   FUNC_0();
  }
 } else {

  if (FUNC_8(VAR_1, VAR_2) != 0)
   FUNC_12(1, "failed to open lastlog database");
  VAR_14 = ((void*)0);
  VAR_12 = 0;
  while ((VAR_13 = FUNC_3()) != ((void*)0)) {
   if (VAR_13->ut_type != VAR_0)
    continue;
   if ((VAR_12 % 16) == 0) {
    VAR_14 = FUNC_7(VAR_14,
        (VAR_12 + 16) * sizeof(struct utmpx));
    if (VAR_14 == ((void*)0))
     FUNC_12(1, "malloc");
   }
   VAR_14[VAR_12++] = *VAR_13;
  }
  FUNC_0();

  FUNC_6(VAR_14, VAR_12, sizeof(struct utmpx), VAR_6);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   FUNC_5(&VAR_14[VAR_11]);
 }

 FUNC_11("lastlogin");
 FUNC_10("lastlogin-information");
 FUNC_13();

 FUNC_1(0);
}
