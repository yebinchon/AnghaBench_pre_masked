
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int srp_max_rdma_size; } ;
struct srpt_port {TYPE_3__ port_attrib; struct srpt_device* sdev; } ;
struct srpt_device {int srq_size; TYPE_2__* device; scalar_t__ use_srq; } ;
struct TYPE_8__ {void* status; } ;
struct ib_dm_mad {TYPE_4__ mad_hdr; scalar_t__ data; } ;
struct ib_dm_ioc_profile {int subsys_device_id; int rdma_read_depth; int num_svc_entries; int op_cap_mask; void* rdma_size; void* send_size; void* send_queue_depth; void* protocol_version; void* protocol; void* io_subclass; void* io_class; void* subsys_vendor_id; void* device_version; void* device_id; void* vendor_id; int guid; int id_string; } ;
struct TYPE_5__ {unsigned int max_qp_wr; int vendor_id; int vendor_part_id; int hw_ver; } ;
struct TYPE_6__ {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_dm_ioc_profile*,int ,int) ;
 int FUNC_4 (int ,unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct srpt_port *VAR_14, u32 VAR_15,
    struct ib_dm_mad *VAR_16)
{
 struct srpt_device *VAR_17 = VAR_14->sdev;
 struct ib_dm_ioc_profile *VAR_18;
 int VAR_19;

 VAR_18 = (struct ib_dm_ioc_profile *)VAR_16->data;

 if (!VAR_15 || VAR_15 > 16) {
  VAR_16->mad_hdr.status
   = FUNC_0(VAR_0);
  return;
 }

 if (VAR_15 > 2) {
  VAR_16->mad_hdr.status
   = FUNC_0(VAR_1);
  return;
 }

 if (VAR_17->use_srq)
  VAR_19 = VAR_17->srq_size;
 else
  VAR_19 = FUNC_4(VAR_2,
           VAR_17->device->attrs.max_qp_wr);

 FUNC_3(VAR_18, 0, sizeof(*VAR_18));
 FUNC_5(VAR_18->id_string, VAR_3);
 VAR_18->guid = FUNC_2(VAR_13);
 VAR_18->vendor_id = FUNC_1(VAR_17->device->attrs.vendor_id);
 VAR_18->device_id = FUNC_1(VAR_17->device->attrs.vendor_part_id);
 VAR_18->device_version = FUNC_0(VAR_17->device->attrs.hw_ver);
 VAR_18->subsys_vendor_id = FUNC_1(VAR_17->device->attrs.vendor_id);
 VAR_18->subsys_device_id = 0x0;
 VAR_18->io_class = FUNC_0(VAR_9);
 VAR_18->io_subclass = FUNC_0(VAR_4);
 VAR_18->protocol = FUNC_0(VAR_5);
 VAR_18->protocol_version = FUNC_0(VAR_6);
 VAR_18->send_queue_depth = FUNC_0(VAR_19);
 VAR_18->rdma_read_depth = 4;
 VAR_18->send_size = FUNC_1(VAR_12);
 VAR_18->rdma_size = FUNC_1(FUNC_4(VAR_14->port_attrib.srp_max_rdma_size,
       1U << 24));
 VAR_18->num_svc_entries = 1;
 VAR_18->op_cap_mask = VAR_11 | VAR_10 |
  VAR_7 | VAR_8;

 VAR_16->mad_hdr.status = 0;
}
