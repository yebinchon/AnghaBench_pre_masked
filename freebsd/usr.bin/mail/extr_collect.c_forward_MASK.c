
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int dummy; } ;
struct ignoretab {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,int*,int ) ;
 struct ignoretab* VAR_1 ;
 scalar_t__ FUNC_2 (unsigned char) ;
 struct message* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct message*,int *,struct ignoretab*,char*) ;
 int FUNC_6 (struct message*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;

int
FUNC_9(char VAR_4[], FILE *VAR_5, char *VAR_6, int VAR_7)
{
 int *VAR_8;
 struct ignoretab *VAR_9;
 char *VAR_10;

 VAR_8 = (int *)FUNC_4((VAR_3+1) * sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (0);
 if (FUNC_1(VAR_4, VAR_8, 0) < 0)
  return (0);
 if (*VAR_8 == 0) {
  *VAR_8 = FUNC_0(0, VAR_0);
  if (*VAR_8 == 0) {
   FUNC_3("No appropriate messages\n");
   return (0);
  }
  VAR_8[1] = 0;
 }
 if (VAR_7 == 'f' || VAR_7 == 'F')
  VAR_10 = ((void*)0);
 else if ((VAR_10 = FUNC_7("indentprefix")) == ((void*)0))
  VAR_10 = "\t";
 VAR_9 = FUNC_2((unsigned char)VAR_7) ? ((void*)0) : VAR_1;
 FUNC_3("Interpolating:");
 for (; *VAR_8 != 0; VAR_8++) {
  struct message *VAR_11 = VAR_2 + *VAR_8 - 1;

  FUNC_6(VAR_11);
  FUNC_3(" %d", *VAR_8);
  if (FUNC_5(VAR_11, VAR_5, VAR_9, VAR_10) < 0) {
   FUNC_8("%s", VAR_6);
   return (-1);
  }
 }
 FUNC_3("\n");
 return (0);
}
