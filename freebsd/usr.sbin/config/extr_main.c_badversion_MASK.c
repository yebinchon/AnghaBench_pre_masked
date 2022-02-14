
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_1, "ERROR: version of config(8) does not match kernel!\n");
 FUNC_1(VAR_1, "config version = %d, ", VAR_0);
 FUNC_1(VAR_1, "version required = %d\n\n", VAR_2);
 FUNC_1(VAR_1, "Make sure that /usr/src/usr.sbin/config is in sync\n");
 FUNC_1(VAR_1, "with your /usr/src/sys and install a new config binary\n");
 FUNC_1(VAR_1, "before trying this again.\n\n");
 FUNC_1(VAR_1, "If running the new config fails check your config\n");
 FUNC_1(VAR_1, "file against the GENERIC or LINT config files for\n");
 FUNC_1(VAR_1, "changes in config syntax, or option/device naming\n");
 FUNC_1(VAR_1, "conventions\n\n");
 FUNC_0(1);
}
