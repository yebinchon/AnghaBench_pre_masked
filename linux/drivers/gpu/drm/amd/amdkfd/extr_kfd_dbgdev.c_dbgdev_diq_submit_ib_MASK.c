
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_19__ {int low_part; int high_part; } ;
union ULARGE_INTEGER {TYPE_8__ u; int quad_part; } ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_20__ {int dst_sel; int int_sel; int data_sel; } ;
struct TYPE_18__ {int address_lo_32b; } ;
struct TYPE_17__ {int tc_wb_action_ena; scalar_t__ atc; int cache_policy; int event_index; int event_type; } ;
struct TYPE_16__ {int count; void* type; int opcode; } ;
struct pm4__release_mem {int data_lo; TYPE_9__ bitfields3; int address_hi; TYPE_7__ bitfields4; TYPE_6__ bitfields2; TYPE_5__ header; } ;
struct TYPE_15__ {unsigned int pasid; } ;
struct TYPE_14__ {int ib_base_hi; } ;
struct TYPE_13__ {int ib_base_lo; } ;
struct TYPE_12__ {int count; void* type; int opcode; } ;
struct pm4__indirect_buffer_pasid {int control; TYPE_4__ bitfields5; TYPE_3__ bitfields3; TYPE_2__ bitfields2; TYPE_1__ header; } ;
struct kfd_mem_obj {int gpu_addr; scalar_t__ cpu_ptr; } ;
struct kfd_dbgdev {int dev; struct kernel_queue* kq; } ;
struct TYPE_11__ {int (* acquire_packet_buffer ) (struct kernel_queue*,size_t,unsigned int**) ;int (* submit_packet ) (struct kernel_queue*) ;int (* rollback_packet ) (struct kernel_queue*) ;} ;
struct kernel_queue {TYPE_10__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int,struct kfd_mem_obj**) ;
 int FUNC_3 (int ,struct kfd_mem_obj*) ;
 int FUNC_4 (unsigned int*,int ,size_t) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct kernel_queue*,size_t,unsigned int**) ;
 int FUNC_7 (struct kernel_queue*) ;
 int FUNC_8 (struct kernel_queue*) ;

__attribute__((used)) static int FUNC_9(struct kfd_dbgdev *VAR_12,
    unsigned int VAR_13, uint64_t VAR_14,
    uint32_t *VAR_15, size_t VAR_16)
{
 struct pm4__release_mem *VAR_17;
 struct pm4__indirect_buffer_pasid *VAR_18;
 struct kfd_mem_obj *VAR_19;
 size_t VAR_20;
 union ULARGE_INTEGER *VAR_21;
 union ULARGE_INTEGER VAR_22;
 struct kernel_queue *VAR_23;
 uint64_t *VAR_24;
 unsigned int *VAR_25;
 int VAR_26;

 if (FUNC_0(!VAR_16))
  return -VAR_1;

 VAR_23 = VAR_12->kq;

 VAR_20 = sizeof(struct pm4__release_mem) +
    sizeof(struct pm4__indirect_buffer_pasid);






 VAR_26 = VAR_23->ops.acquire_packet_buffer(VAR_23,
    VAR_20 / sizeof(uint32_t),
    &VAR_25);
 if (VAR_26) {
  FUNC_5("acquire_packet_buffer failed\n");
  return VAR_26;
 }

 FUNC_4(VAR_25, 0, VAR_20);

 VAR_18 = (struct pm4__indirect_buffer_pasid *) (VAR_25);

 VAR_18->header.count = 3;
 VAR_18->header.opcode = VAR_2;
 VAR_18->header.type = VAR_4;

 VAR_21 = (union ULARGE_INTEGER *) &VAR_14;

 VAR_18->bitfields2.ib_base_lo = VAR_21->u.low_part >> 2;
 VAR_18->bitfields3.ib_base_hi = VAR_21->u.high_part;

 VAR_18->control = (1 << 23) | (1 << 31) |
   ((VAR_16 / 4) & 0xfffff);

 VAR_18->bitfields5.pasid = VAR_13;
 VAR_17 = (struct pm4__release_mem *) (VAR_25 +
   (sizeof(struct pm4__indirect_buffer_pasid) /
     sizeof(unsigned int)));

 VAR_26 = FUNC_2(VAR_12->dev, sizeof(uint64_t),
     &VAR_19);

 if (VAR_26) {
  FUNC_5("Failed to allocate GART memory\n");
  VAR_23->ops.rollback_packet(VAR_23);
  return VAR_26;
 }

 VAR_24 = (uint64_t *) VAR_19->cpu_ptr;

 *VAR_24 = VAR_6;

 VAR_17->header.opcode = VAR_3;
 VAR_17->header.type = VAR_4;
 VAR_17->header.count = sizeof(struct pm4__release_mem) / 4 - 2;

 VAR_17->bitfields2.event_type = VAR_0;
 VAR_17->bitfields2.event_index =
    VAR_10;

 VAR_17->bitfields2.cache_policy = VAR_7;
 VAR_17->bitfields2.atc = 0;
 VAR_17->bitfields2.tc_wb_action_ena = 1;

 VAR_22.quad_part = VAR_19->gpu_addr;

 VAR_17->bitfields4.address_lo_32b = VAR_22.u.low_part >> 2;
 VAR_17->address_hi = VAR_22.u.high_part;

 VAR_17->bitfields3.data_sel =
    VAR_8;

 VAR_17->bitfields3.int_sel =
   VAR_11;

 VAR_17->bitfields3.dst_sel =
   VAR_9;

 VAR_17->data_lo = VAR_5;

 VAR_23->ops.submit_packet(VAR_23);


 VAR_26 = FUNC_1(
   (unsigned int *) VAR_24,
   VAR_5, 1500);

 FUNC_3(VAR_12->dev, VAR_19);

 return VAR_26;
}
