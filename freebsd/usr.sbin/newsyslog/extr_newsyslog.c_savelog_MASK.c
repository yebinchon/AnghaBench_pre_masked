
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static void
FUNC_7(char *VAR_1, char *VAR_2)
{
 FILE *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_5(VAR_1, VAR_2);
 if (VAR_6 == 0)
  return;

 if ((VAR_3 = FUNC_3(VAR_1, "r")) == ((void*)0))
  FUNC_0(1, "can't fopen %s for reading", VAR_1);
 if ((VAR_4 = FUNC_3(VAR_2, "w")) == ((void*)0))
  FUNC_0(1, "can't fopen %s for writing", VAR_2);

 while ((VAR_5 = FUNC_4(VAR_3)) != VAR_0) {
  if ((FUNC_6(VAR_5, VAR_4)) == VAR_0)
   FUNC_0(1, "error writing to %s", VAR_2);
 }

 if (FUNC_2(VAR_3))
  FUNC_0(1, "error reading from %s", VAR_1);
 if ((FUNC_1(VAR_3)) != 0)
  FUNC_0(1, "can't fclose %s", VAR_2);
 if ((FUNC_1(VAR_4)) != 0)
  FUNC_0(1, "can't fclose %s", VAR_1);
}
