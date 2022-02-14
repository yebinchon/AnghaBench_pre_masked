
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int drc_index; } ;
struct pseries_hp_errorlog {scalar_t__ id_type; scalar_t__ action; TYPE_1__ _drc_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;

int FUNC_6(struct pseries_hp_errorlog *VAR_6)
{
 u32 VAR_7;
 int VAR_8;


 if (!VAR_5)
  VAR_5 = FUNC_1(((void*)0), "ibm,persistent-memory");
 if (!VAR_5) {
  FUNC_4("Hotplug event for a pmem device, but none exists\n");
  return -VAR_1;
 }

 if (VAR_6->id_type != VAR_4) {
  FUNC_4("Unsupported hotplug event type %d\n",
    VAR_6->id_type);
  return -VAR_0;
 }

 VAR_7 = VAR_6->_drc_u.drc_index;

 FUNC_0();

 if (VAR_6->action == VAR_2) {
  VAR_8 = FUNC_2(VAR_7);
 } else if (VAR_6->action == VAR_3) {
  VAR_8 = FUNC_3(VAR_7);
 } else {
  FUNC_4("Unsupported hotplug action (%d)\n", VAR_6->action);
  VAR_8 = -VAR_0;
 }

 FUNC_5();
 return VAR_8;
}
