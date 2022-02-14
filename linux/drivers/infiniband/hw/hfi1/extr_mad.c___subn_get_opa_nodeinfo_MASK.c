
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_node_info {int node_type; scalar_t__ node_guid; int local_port_num; int * vendor_id; int revision; void* device_id; void* partition_cap; int system_image_guid; int num_ports; int class_version; int base_version; scalar_t__ port_guid; } ;
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
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_8(struct opa_smp *VAR_5, u32 VAR_6, u8 *VAR_7,
       struct ib_device *VAR_8, u8 VAR_9,
       u32 *VAR_10, u32 VAR_11)
{
 struct opa_node_info *VAR_12;
 struct hfi1_devdata *VAR_13 = FUNC_2(VAR_8);
 unsigned VAR_14 = VAR_9 - 1;

 VAR_12 = (struct opa_node_info *)VAR_7;


 if (VAR_6 || VAR_14 >= VAR_13->num_pports || VAR_8->node_guid == 0 ||
     FUNC_6(sizeof(*VAR_12), VAR_11) ||
     FUNC_3(FUNC_7(VAR_8, VAR_9), VAR_0) == 0) {
  VAR_5->status |= VAR_1;
  return FUNC_5((struct ib_mad_hdr *)VAR_5);
 }

 VAR_12->port_guid = FUNC_3(FUNC_7(VAR_8, VAR_9), VAR_0);
 VAR_12->base_version = VAR_2;
 VAR_12->class_version = VAR_3;
 VAR_12->node_type = 1;
 VAR_12->num_ports = VAR_8->phys_port_cnt;

 VAR_12->system_image_guid = VAR_4;
 VAR_12->node_guid = VAR_8->node_guid;
 VAR_12->partition_cap = FUNC_0(FUNC_4(VAR_13));
 VAR_12->device_id = FUNC_0(VAR_13->pcidev->device);
 VAR_12->revision = FUNC_1(VAR_13->minrev);
 VAR_12->local_port_num = VAR_9;
 VAR_12->vendor_id[0] = VAR_13->oui1;
 VAR_12->vendor_id[1] = VAR_13->oui2;
 VAR_12->vendor_id[2] = VAR_13->oui3;

 if (VAR_10)
  *VAR_10 += sizeof(*VAR_12);

 return FUNC_5((struct ib_mad_hdr *)VAR_5);
}
