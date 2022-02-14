
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ring {int name; } ;
struct TYPE_7__ {int gds_reserve_size; int gds_reserve_addr; TYPE_1__* buf; } ;
struct TYPE_8__ {TYPE_3__ ngg; struct amdgpu_ring* gfx_ring; } ;
struct TYPE_6__ {scalar_t__ gds_size; } ;
struct amdgpu_device {TYPE_4__ gfx; TYPE_2__ gds; } ;
struct TYPE_5__ {int size; int gpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (int ,int ,int ,int) ;
 int VAR_22 ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int FUNC_8 (struct amdgpu_ring*) ;
 int FUNC_9 (struct amdgpu_ring*,int) ;
 int FUNC_10 (struct amdgpu_ring*,int ,int,int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_device *VAR_32)
{
 struct amdgpu_ring *VAR_33 = &VAR_32->gfx.gfx_ring[0];
 int VAR_34;
 u32 VAR_35, VAR_36;

 if (!VAR_22)
  return 0;


 VAR_35 = FUNC_4(0, VAR_14, VAR_4,
        VAR_32->gfx.ngg.buf[VAR_8].size >> 8);
 VAR_35 = FUNC_4(VAR_35, VAR_14, VAR_13,
        VAR_32->gfx.ngg.buf[VAR_7].size >> 8);
 FUNC_6(VAR_3, 0, VAR_24, VAR_35);

 VAR_35 = FUNC_4(0, VAR_15, VAR_2,
        VAR_32->gfx.ngg.buf[VAR_5].size >> 8);
 VAR_35 = FUNC_4(VAR_35, VAR_15, VAR_12,
        VAR_32->gfx.ngg.buf[VAR_6].size >> 10);
 FUNC_6(VAR_3, 0, VAR_25, VAR_35);


 VAR_36 = FUNC_11(VAR_32->gfx.ngg.buf[VAR_8].gpu_addr);
 VAR_35 = FUNC_4(0, VAR_18, VAR_0, VAR_36);
 FUNC_6(VAR_3, 0, VAR_28, VAR_35);

 VAR_36 = FUNC_12(VAR_32->gfx.ngg.buf[VAR_8].gpu_addr);
 VAR_35 = FUNC_4(0, VAR_19, VAR_1, VAR_36);
 FUNC_6(VAR_3, 0, VAR_29, VAR_35);

 VAR_36 = FUNC_11(VAR_32->gfx.ngg.buf[VAR_7].gpu_addr);
 VAR_35 = FUNC_4(0, VAR_20, VAR_0, VAR_36);
 FUNC_6(VAR_3, 0, VAR_30, VAR_35);

 VAR_36 = FUNC_12(VAR_32->gfx.ngg.buf[VAR_7].gpu_addr);
 VAR_35 = FUNC_4(0, VAR_21, VAR_1, VAR_36);
 FUNC_6(VAR_3, 0, VAR_31, VAR_35);

 VAR_36 = FUNC_11(VAR_32->gfx.ngg.buf[VAR_5].gpu_addr);
 VAR_35 = FUNC_4(0, VAR_16, VAR_0, VAR_36);
 FUNC_6(VAR_3, 0, VAR_26, VAR_35);

 VAR_36 = FUNC_12(VAR_32->gfx.ngg.buf[VAR_5].gpu_addr);
 VAR_35 = FUNC_4(0, VAR_17, VAR_1, VAR_36);
 FUNC_6(VAR_3, 0, VAR_27, VAR_35);


 VAR_34 = FUNC_7(VAR_33, 17);
 if (VAR_34) {
  FUNC_0("amdgpu: NGG failed to lock ring %s (%d).\n",
     VAR_33->name, VAR_34);
  return VAR_34;
 }

 FUNC_10(VAR_33, 0, 0,
       FUNC_5(VAR_3, 0, VAR_23),
              (VAR_32->gds.gds_size +
        VAR_32->gfx.ngg.gds_reserve_size));

 FUNC_9(VAR_33, FUNC_1(VAR_9, 5));
 FUNC_9(VAR_33, (VAR_11 |
    FUNC_2(1) |
    FUNC_3(2)));
 FUNC_9(VAR_33, 0);
 FUNC_9(VAR_33, 0);
 FUNC_9(VAR_33, VAR_32->gfx.ngg.gds_reserve_addr);
 FUNC_9(VAR_33, 0);
 FUNC_9(VAR_33, VAR_10 |
    VAR_32->gfx.ngg.gds_reserve_size);

 FUNC_10(VAR_33, 0, 0,
       FUNC_5(VAR_3, 0, VAR_23), 0);

 FUNC_8(VAR_33);

 return 0;
}
