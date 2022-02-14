
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

 FUNC_1(VAR_0, "usage: mfiutil [-de] [-u unit] <command> ...\n\n");
 FUNC_1(VAR_0, "Commands include:\n");
 FUNC_1(VAR_0, "    version\n");
 FUNC_1(VAR_0, "    show adapter              - display controller information\n");
 FUNC_1(VAR_0, "    show battery              - display battery information\n");
 FUNC_1(VAR_0, "    show config               - display RAID configuration\n");
 FUNC_1(VAR_0, "    show drives               - list physical drives\n");
 FUNC_1(VAR_0, "    show events               - display event log\n");
 FUNC_1(VAR_0, "    show firmware             - list firmware images\n");
 FUNC_1(VAR_0, "    show foreign              - display detected foreign volumes\n");
 FUNC_1(VAR_0, "    show logstate             - display event log sequence numbers\n");
 FUNC_1(VAR_0, "    show volumes              - list logical volumes\n");
 FUNC_1(VAR_0, "    show patrol               - display patrol read status\n");
 FUNC_1(VAR_0, "    show progress             - display status of active operations\n");
 FUNC_1(VAR_0, "    fail <drive>              - fail a physical drive\n");
 FUNC_1(VAR_0, "    good <drive>              - set a failed/SYSPD drive as UNCONFIGURED\n");
 FUNC_1(VAR_0, "    rebuild <drive>           - mark failed drive ready for rebuild\n");
 FUNC_1(VAR_0, "    syspd <drive>             - set drive into use as SYSPD JBOD\n");
 FUNC_1(VAR_0, "    drive progress <drive>    - display status of active operations\n");
 FUNC_1(VAR_0, "    drive clear <drive> <start|stop> - clear a drive with all 0x00\n");
 FUNC_1(VAR_0, "    start rebuild <drive>\n");
 FUNC_1(VAR_0, "    abort rebuild <drive>\n");
 FUNC_1(VAR_0, "    locate <drive> <on|off>   - toggle drive LED\n");
 FUNC_1(VAR_0, "    cache <volume> [command [setting]]\n");
 FUNC_1(VAR_0, "    name <volume> <name>\n");
 FUNC_1(VAR_0, "    volume progress <volume>  - display status of active operations\n");
 FUNC_1(VAR_0, "    clear                     - clear volume configuration\n");
 FUNC_1(VAR_0, "    create <type> [-v] [-s stripe_size] <drive>[,<drive>[,...]] [<drive>[,<drive>[,...]]\n");
 FUNC_1(VAR_0, "    delete <volume>\n");
 FUNC_1(VAR_0, "    add <drive> [volume]      - add a hot spare\n");
 FUNC_1(VAR_0, "    remove <drive>            - remove a hot spare\n");
 FUNC_1(VAR_0, "    patrol <disable|auto|manual> [interval [start]]\n");
 FUNC_1(VAR_0, "    start patrol              - start a patrol read\n");
 FUNC_1(VAR_0, "    stop patrol               - stop a patrol read\n");
 FUNC_1(VAR_0, "    foreign scan              - scan for foreign configurations\n");
 FUNC_1(VAR_0, "    foreign clear [volume]    - clear foreign configurations (default all)\n");
 FUNC_1(VAR_0, "    foreign diag [volume]     - diagnostic display foreign configurations (default all)\n");
 FUNC_1(VAR_0, "    foreign preview [volume]  - preview foreign configurations (default all)\n");
 FUNC_1(VAR_0, "    foreign import [volume]   - import foreign configurations (default all)\n");
 FUNC_1(VAR_0, "    flash <firmware>\n");
 FUNC_1(VAR_0, "    start learn               - start a BBU relearn\n");
 FUNC_1(VAR_0, "    bbu <setting> <value>     - set BBU properties\n");
 FUNC_1(VAR_0, "    ctrlprop rebuild [rate]   - get/set the volume rebuild rate\n");
 FUNC_1(VAR_0, "    ctrlprop alarm [0/1]      - enable/disable controller alarms\n");




 FUNC_0(1);
}
