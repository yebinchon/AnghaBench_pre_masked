
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int kobj; } ;
struct TYPE_5__ {char* name; void* mode; } ;
struct TYPE_6__ {TYPE_1__ attr_props; scalar_t__ kobj_topology; TYPE_1__ attr_genid; int kobj_nodes; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,int *,char*) ;
 int FUNC_5 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__,TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_5;

 FUNC_5("Creating topology SYSFS entries\n");
 if (!VAR_3.kobj_topology) {
  VAR_3.kobj_topology =
    FUNC_0(VAR_3.kobj_topology);
  if (!VAR_3.kobj_topology)
   return -VAR_0;

  VAR_5 = FUNC_4(VAR_3.kobj_topology,
    &VAR_4, &VAR_2->kobj,
    "topology");
  if (VAR_5 < 0)
   return VAR_5;

  VAR_3.kobj_nodes = FUNC_3("nodes",
    VAR_3.kobj_topology);
  if (!VAR_3.kobj_nodes)
   return -VAR_0;

  VAR_3.attr_genid.name = "generation_id";
  VAR_3.attr_genid.mode = VAR_1;
  FUNC_6(&VAR_3.attr_genid);
  VAR_5 = FUNC_7(VAR_3.kobj_topology,
    &VAR_3.attr_genid);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_3.attr_props.name = "system_properties";
  VAR_3.attr_props.mode = VAR_1;
  FUNC_6(&VAR_3.attr_props);
  VAR_5 = FUNC_7(VAR_3.kobj_topology,
    &VAR_3.attr_props);
  if (VAR_5 < 0)
   return VAR_5;
 }

 FUNC_2();

 return FUNC_1();
}
