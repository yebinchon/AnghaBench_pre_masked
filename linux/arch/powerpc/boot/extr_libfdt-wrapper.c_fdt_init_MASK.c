
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int finalize; int get_path; int del_node; int find_node_by_compatible; int find_node_by_prop_value; int create_node; int get_parent; int setprop; int getprop; int finddevice; } ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 void* VAR_3 ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_4 (int) ;

void FUNC_5(void *VAR_14)
{
 int VAR_15;
 int VAR_16;

 VAR_2.finddevice = VAR_9;
 VAR_2.getprop = VAR_12;
 VAR_2.setprop = VAR_13;
 VAR_2.get_parent = VAR_10;
 VAR_2.create_node = VAR_4;
 VAR_2.find_node_by_prop_value = VAR_8;
 VAR_2.find_node_by_compatible = VAR_7;
 VAR_2.del_node = VAR_5;
 VAR_2.get_path = VAR_11;
 VAR_2.finalize = VAR_6;


 VAR_3 = VAR_14;
 VAR_16 = FUNC_3(VAR_3) + VAR_0;
 VAR_1 = FUNC_4(VAR_16);
 if(!VAR_1)
  FUNC_0("malloc failed. can't relocate the device tree\n\r");

 VAR_15 = FUNC_1(VAR_3, VAR_1, VAR_16);

 if (VAR_15 != 0)
  FUNC_0("fdt_init(): %s\n\r", FUNC_2(VAR_15));

 VAR_3 = VAR_1;
}
