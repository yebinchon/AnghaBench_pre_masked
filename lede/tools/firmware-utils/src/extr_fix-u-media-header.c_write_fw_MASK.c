
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(char *VAR_4, int VAR_5)
{
 FILE *VAR_6;
 int VAR_7 = VAR_0;

 VAR_6 = FUNC_3(VAR_3, "w");
 if (VAR_6 == ((void*)0)) {
  FUNC_0("could not open \"%s\" for writing", VAR_3);
  goto out;
 }

 VAR_2 = 0;
 FUNC_4(VAR_4, VAR_5, 1, VAR_6);
 if (VAR_2) {
  FUNC_0("unable to write output file");
  goto out_flush;
 }

 VAR_7 = VAR_1;

out_flush:
 FUNC_2(VAR_6);
 FUNC_1(VAR_6);
 if (VAR_7 != VAR_1) {
  FUNC_5(VAR_3);
 }
out:
 return VAR_7;
}
