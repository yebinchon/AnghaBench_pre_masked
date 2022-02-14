
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
 FUNC_1(VAR_0, ""
     "usbconfig - configure the USB subsystem" "\n"
     "usage: usbconfig -u <busnum> -a <devaddr> -i <ifaceindex> [cmds...]" "\n"
     "usage: usbconfig -d [ugen]<busnum>.<devaddr> -i <ifaceindex> [cmds...]" "\n"
     "commands:" "\n"
     "  set_config <cfg_index>" "\n"
     "  set_alt <alt_index>" "\n"
     "  set_template <template>" "\n"
     "  get_template" "\n"
     "  add_dev_quirk_vplh <vid> <pid> <lo_rev> <hi_rev> <quirk>" "\n"
     "  remove_dev_quirk_vplh <vid> <pid> <lo_rev> <hi_rev> <quirk>" "\n"
     "  add_quirk <quirk>" "\n"
     "  remove_quirk <quirk>" "\n"
     "  detach_kernel_driver" "\n"
     "  dump_quirk_names" "\n"
     "  dump_device_quirks" "\n"
     "  dump_all_desc" "\n"
     "  dump_device_desc" "\n"
     "  dump_curr_config_desc" "\n"
     "  dump_all_config_desc" "\n"
     "  dump_string <index>" "\n"
     "  dump_info" "\n"
     "  show_ifdrv" "\n"
     "  suspend" "\n"
     "  resume" "\n"
     "  power_off" "\n"
     "  power_save" "\n"
     "  power_on" "\n"
     "  reset" "\n"
     "  list" "\n"
     "  do_request <bmReqTyp> <bReq> <wVal> <wIdx> <wLen> <data...>" "\n"
 );
 FUNC_0(1);
}
