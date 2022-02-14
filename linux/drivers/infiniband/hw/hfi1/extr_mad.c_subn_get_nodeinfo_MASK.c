
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_smp {int status; scalar_t__ attr_mod; int data; } ;
struct ib_node_info {int node_type; scalar_t__ node_guid; int local_port_num; int * vendor_id; int revision; void* device_id; void* partition_cap; int sys_guid; int num_ports; int class_version; int base_version; scalar_t__ port_guid; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {scalar_t__ node_guid; int phys_port_cnt; } ;
struct hfi1_devdata {unsigned int num_pports; int oui3; int oui2; int oui1; int minrev; TYPE_1__* pcidev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct hfi1_devdata* FUNC_2 (struct ib_device*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct hfi1_devdata*) ;
 int VAR_4 ;
 int FUNC_5 (struct ib_mad_hdr*) ;
 int FUNC_6 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_7(struct ib_smp *VAR_5, struct ib_device *VAR_6,
        u8 VAR_7)
{
 struct ib_node_info *VAR_8 = (struct ib_node_info *)&VAR_5->data;
 struct hfi1_devdata *VAR_9 = FUNC_2(VAR_6);
 unsigned VAR_10 = VAR_7 - 1;


 if (VAR_5->attr_mod || VAR_10 >= VAR_9->num_pports ||
     VAR_6->node_guid == 0 ||
     FUNC_3(FUNC_6(VAR_6, VAR_7), VAR_0) == 0) {
  VAR_5->status |= VAR_1;
  return FUNC_5((struct ib_mad_hdr *)VAR_5);
 }

 VAR_8->port_guid = FUNC_3(FUNC_6(VAR_6, VAR_7), VAR_0);
 VAR_8->base_version = VAR_2;
 VAR_8->class_version = VAR_3;
 VAR_8->node_type = 1;
 VAR_8->num_ports = VAR_6->phys_port_cnt;

 VAR_8->sys_guid = VAR_4;
 VAR_8->node_guid = VAR_6->node_guid;
 VAR_8->partition_cap = FUNC_0(FUNC_4(VAR_9));
 VAR_8->device_id = FUNC_0(VAR_9->pcidev->device);
 VAR_8->revision = FUNC_1(VAR_9->minrev);
 VAR_8->local_port_num = VAR_7;
 VAR_8->vendor_id[0] = VAR_9->oui1;
 VAR_8->vendor_id[1] = VAR_9->oui2;
 VAR_8->vendor_id[2] = VAR_9->oui3;

 return FUNC_5((struct ib_mad_hdr *)VAR_5);
}
