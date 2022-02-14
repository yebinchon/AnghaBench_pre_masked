
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qib_devdata {unsigned int num_pports; int majrev; int minrev; int deviceid; TYPE_1__* pport; } ;
struct ib_smp {int status; scalar_t__ attr_mod; int data; } ;
struct ib_node_info {scalar_t__ port_guid; int base_version; int class_version; int node_type; scalar_t__ node_guid; int local_port_num; int * vendor_id; int revision; void* device_id; void* partition_cap; int sys_guid; int num_ports; } ;
struct ib_device {int phys_port_cnt; } ;
struct TYPE_2__ {scalar_t__ guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct qib_devdata* FUNC_2 (struct ib_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_5(struct ib_smp *VAR_5, struct ib_device *VAR_6,
        u8 VAR_7)
{
 struct ib_node_info *VAR_8 = (struct ib_node_info *)&VAR_5->data;
 struct qib_devdata *VAR_9 = FUNC_2(VAR_6);
 u32 VAR_10, VAR_11;
 unsigned VAR_12 = VAR_7 - 1;


 if (VAR_5->attr_mod || VAR_12 >= VAR_9->num_pports ||
     VAR_9->pport[VAR_12].guid == 0)
  VAR_5->status |= VAR_0;
 else
  VAR_8->port_guid = VAR_9->pport[VAR_12].guid;

 VAR_8->base_version = 1;
 VAR_8->class_version = 1;
 VAR_8->node_type = 1;
 VAR_8->num_ports = VAR_6->phys_port_cnt;

 VAR_8->sys_guid = VAR_4;
 VAR_8->node_guid = VAR_9->pport->guid;
 VAR_8->partition_cap = FUNC_0(FUNC_3(VAR_9));
 VAR_8->device_id = FUNC_0(VAR_9->deviceid);
 VAR_10 = VAR_9->majrev;
 VAR_11 = VAR_9->minrev;
 VAR_8->revision = FUNC_1((VAR_10 << 16) | VAR_11);
 VAR_8->local_port_num = VAR_7;
 VAR_8->vendor_id[0] = VAR_1;
 VAR_8->vendor_id[1] = VAR_2;
 VAR_8->vendor_id[2] = VAR_3;

 return FUNC_4(VAR_5);
}
