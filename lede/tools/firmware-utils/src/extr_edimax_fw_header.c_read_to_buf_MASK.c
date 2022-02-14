
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int,int *) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, char *VAR_4, int VAR_5)
{
 FILE *VAR_6;
 int VAR_7 = VAR_0;

 VAR_6 = FUNC_2(VAR_3, "r");
 if (VAR_6 == ((void*)0)) {
  FUNC_0("could not open \"%s\" for reading", VAR_3);
  goto out;
 }

 VAR_2 = 0;
 FUNC_3(VAR_4, VAR_5, 1, VAR_6);
 if (VAR_2 != 0) {
  FUNC_0("unable to read from file \"%s\"", VAR_3);
  goto out_close;
 }

 VAR_7 = VAR_1;

out_close:
 FUNC_1(VAR_6);
out:
 return VAR_7;
}
