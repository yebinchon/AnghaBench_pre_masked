
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_0, "usage: mptutil [-u unit] <command> ...\n\n");
 FUNC_1(VAR_0, "Commands include:\n");
 FUNC_1(VAR_0, "    version\n");
 FUNC_1(VAR_0, "    show adapter              - display controller information\n");
 FUNC_1(VAR_0, "    show config               - display RAID configuration\n");
 FUNC_1(VAR_0, "    show drives               - list physical drives\n");
 FUNC_1(VAR_0, "    show events               - display event log\n");
 FUNC_1(VAR_0, "    show volumes              - list logical volumes\n");
 FUNC_1(VAR_0, "    fail <drive>              - fail a physical drive\n");
 FUNC_1(VAR_0, "    online <drive>            - bring an offline physical drive online\n");
 FUNC_1(VAR_0, "    offline <drive>           - mark a physical drive offline\n");
 FUNC_1(VAR_0, "    name <volume> <name>\n");
 FUNC_1(VAR_0, "    volume status <volume>    - display volume status\n");
 FUNC_1(VAR_0, "    volume cache <volume> <enable|disable>\n");
 FUNC_1(VAR_0, "                              - Enable or disable the volume drive caches\n");
 FUNC_1(VAR_0, "    clear                     - clear volume configuration\n");
 FUNC_1(VAR_0, "    create <type> [-vq] [-s stripe] <drive>[,<drive>[,...]]\n");
 FUNC_1(VAR_0, "    delete <volume>\n");
 FUNC_1(VAR_0, "    add <drive> [volume]      - add a hot spare\n");
 FUNC_1(VAR_0, "    remove <drive>            - remove a hot spare\n");





 FUNC_0(1);
}
