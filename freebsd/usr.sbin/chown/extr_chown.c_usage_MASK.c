
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{

 if (VAR_0)
  (void)FUNC_1(VAR_1, "%s\n%s\n",
      "usage: chown [-fhvx] [-R [-H | -L | -P]] owner[:group]"
      " file ...",
      "       chown [-fhvx] [-R [-H | -L | -P]] :group file ...");
 else
  (void)FUNC_1(VAR_1, "%s\n",
      "usage: chgrp [-fhvx] [-R [-H | -L | -P]] group file ...");
 FUNC_0(1);
}
