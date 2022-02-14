
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fragment {int oldlines; int newlines; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, int VAR_1, struct fragment *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;

 if (VAR_1 < 1) {
  FUNC_3("recount: ignore empty hunk");
  return;
 }

 for (;;) {
  int VAR_6 = FUNC_1(VAR_0, VAR_1);
  VAR_1 -= VAR_6;
  VAR_0 += VAR_6;

  if (VAR_1 < 1)
   break;

  switch (*VAR_0) {
  case ' ': case '\n':
   VAR_4++;

  case '-':
   VAR_3++;
   continue;
  case '+':
   VAR_4++;
   continue;
  case '\\':
   continue;
  case '@':
   VAR_5 = VAR_1 < 3 || !FUNC_2(VAR_0, "@@ ");
   break;
  case 'd':
   VAR_5 = VAR_1 < 5 || !FUNC_2(VAR_0, "diff ");
   break;
  default:
   VAR_5 = -1;
   break;
  }
  if (VAR_5) {
   FUNC_3(FUNC_0("recount: unexpected line: %.*s"),
    (int)FUNC_1(VAR_0, VAR_1), VAR_0);
   return;
  }
  break;
 }
 VAR_2->oldlines = VAR_3;
 VAR_2->newlines = VAR_4;
}
