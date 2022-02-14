
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int ring_size; void* wptr; int gpu_addr; } ;
struct TYPE_7__ {int gb_addr_config; } ;
struct TYPE_8__ {TYPE_3__ config; } ;
struct TYPE_6__ {int num_vcn_inst; int harvest_config; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_4__ gfx; TYPE_2__ vcn; } ;
struct TYPE_5__ {struct amdgpu_ring ring_jpeg; } ;


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
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_30)
{
 struct amdgpu_ring *VAR_31;
 uint32_t VAR_32;
 int VAR_33;

 for (VAR_33 = 0; VAR_33 < VAR_30->vcn.num_vcn_inst; ++VAR_33) {
  if (VAR_30->vcn.harvest_config & (1 << VAR_33))
   continue;
  VAR_31 = &VAR_30->vcn.inst[VAR_33].ring_jpeg;

  FUNC_2(FUNC_1(VAR_12, VAR_33, VAR_22), 0,
   ~VAR_14);


  VAR_32 = FUNC_0(VAR_15, VAR_33, VAR_16);
  VAR_32 |= 1 << VAR_2;
  VAR_32 |= 1 << VAR_0;
  VAR_32 |= 4 << VAR_1;
  FUNC_3(VAR_15, VAR_33, VAR_16, VAR_32);

  VAR_32 = FUNC_0(VAR_15, VAR_33, VAR_17);
  VAR_32 &= ~(VAR_9
   | VAR_8
   | VAR_7
   | VAR_10);
  FUNC_3(VAR_15, VAR_33, VAR_17, VAR_32);

  VAR_32 = FUNC_0(VAR_15, VAR_33, VAR_16);
  VAR_32 &= ~(VAR_5
   | VAR_4
   | VAR_3
   | VAR_6);
  FUNC_3(VAR_15, VAR_33, VAR_16, VAR_32);


  FUNC_3(VAR_12, VAR_33, VAR_19,
   VAR_30->gfx.config.gb_addr_config);
  FUNC_3(VAR_12, VAR_33, VAR_18,
   VAR_30->gfx.config.gb_addr_config);


  FUNC_2(FUNC_1(VAR_12, VAR_33, VAR_21), 0,
   ~VAR_13);


  FUNC_2(FUNC_1(VAR_15, VAR_33, VAR_20),
   VAR_11,
   ~VAR_11);

  FUNC_3(VAR_12, VAR_33, VAR_29, 0);
  FUNC_3(VAR_12, VAR_33, VAR_23, (0x00000001L | 0x00000002L));
  FUNC_3(VAR_12, VAR_33, VAR_28,
   FUNC_4(VAR_31->gpu_addr));
  FUNC_3(VAR_12, VAR_33, VAR_27,
   FUNC_5(VAR_31->gpu_addr));
  FUNC_3(VAR_12, VAR_33, VAR_24, 0);
  FUNC_3(VAR_12, VAR_33, VAR_26, 0);
  FUNC_3(VAR_12, VAR_33, VAR_23, 0x00000002L);
  FUNC_3(VAR_12, VAR_33, VAR_25, VAR_31->ring_size / 4);
  VAR_31->wptr = FUNC_0(VAR_12, VAR_33, VAR_26);
 }

 return 0;
}
