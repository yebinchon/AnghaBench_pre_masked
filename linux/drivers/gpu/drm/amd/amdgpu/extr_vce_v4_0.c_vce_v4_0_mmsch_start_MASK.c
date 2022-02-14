
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct mmsch_v1_0_init_header {int header_size; int vce_table_size; int uvd_table_size; } ;
struct amdgpu_mm_table {scalar_t__ cpu_addr; int gpu_addr; } ;
struct TYPE_6__ {TYPE_2__* ring; } ;
struct TYPE_4__ {scalar_t__* wb; } ;
struct amdgpu_device {int dev; TYPE_3__ vce; TYPE_1__ wb; } ;
struct TYPE_5__ {size_t wptr_offs; scalar_t__ wptr_old; scalar_t__ wptr; int doorbell_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_10,
    struct amdgpu_mm_table *VAR_11)
{
 uint32_t VAR_12 = 0, VAR_13;
 uint64_t VAR_14 = VAR_11->gpu_addr;
 struct mmsch_v1_0_init_header *VAR_15 = (struct mmsch_v1_0_init_header *)VAR_11->cpu_addr;
 uint32_t VAR_16;

 VAR_16 = VAR_15->header_size + VAR_15->vce_table_size + VAR_15->uvd_table_size;


 FUNC_3(FUNC_1(VAR_1, 0, VAR_5), FUNC_5(VAR_14));
 FUNC_3(FUNC_1(VAR_1, 0, VAR_4), FUNC_7(VAR_14));


 VAR_12 = FUNC_0(FUNC_1(VAR_1, 0, VAR_9));
 VAR_12 &= ~VAR_2;
 VAR_12 |= (0 << VAR_3);
 FUNC_3(FUNC_1(VAR_1, 0, VAR_9), VAR_12);


 FUNC_3(FUNC_1(VAR_1, 0, VAR_6), VAR_16);


 FUNC_3(FUNC_1(VAR_1, 0, VAR_8), 0);

 FUNC_2(VAR_10->vce.ring[0].doorbell_index, 0);
 VAR_10->wb.wb[VAR_10->vce.ring[0].wptr_offs] = 0;
 VAR_10->vce.ring[0].wptr = 0;
 VAR_10->vce.ring[0].wptr_old = 0;


 FUNC_3(FUNC_1(VAR_1, 0, VAR_7), 0x10000001);

 VAR_12 = FUNC_0(FUNC_1(VAR_1, 0, VAR_8));
 VAR_13 = 1000;
 while ((VAR_12 & 0x10000002) != 0x10000002) {
  FUNC_6(10);
  VAR_12 = FUNC_0(FUNC_1(VAR_1, 0, VAR_8));
  VAR_13--;
  if (!VAR_13)
   break;
 }

 if (!VAR_13) {
  FUNC_4(VAR_10->dev, "failed to init MMSCH, mmVCE_MMSCH_VF_MAILBOX_RESP = %x\n", VAR_12);
  return -VAR_0;
 }

 return 0;
}
