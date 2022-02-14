
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void
FUNC_9(int VAR_1)
{
 char *VAR_2;
 int VAR_3 = 0;






 if (VAR_1 < 0 || VAR_1 > 0xffff)
  FUNC_3(1, "Bad boot variable %#x", VAR_1);
 FUNC_0(&VAR_2, "%s%04X", "Boot", VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_2(1, "asprintf");
 FUNC_6("Removing boot variable '%s'\n", VAR_2);
 if (FUNC_1(VAR_0, VAR_2) < 0) {
  VAR_3 = 1;
  FUNC_8("cannot delete variable %s", VAR_2);
 }
 FUNC_6("Removing 0x%x from BootOrder\n", VAR_1);
 FUNC_7(VAR_1);
 FUNC_5(VAR_2);
 if (VAR_3)
  FUNC_4(VAR_3);
}
