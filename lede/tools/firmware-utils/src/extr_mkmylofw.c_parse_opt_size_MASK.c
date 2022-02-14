
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char,char*) ;
 scalar_t__ FUNC_3 (char*,int *) ;

int
FUNC_4(char VAR_1, char *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_2)) {
  goto err_out;
 }

 if (FUNC_3(VAR_2, &VAR_0) != 0) {
  FUNC_1(0,"invalid flash size: %s", VAR_2);
  goto err_out;
 }

 FUNC_0(1, "flash size set to %d bytes", VAR_0);

 return 0;

err_out:
 return -1;
}
