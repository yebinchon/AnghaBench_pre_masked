
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int gpu_addr; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int length_dw; int gpu_addr; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ) ;

void FUNC_5(struct amdgpu_ring *VAR_15,
    struct amdgpu_job *VAR_16,
    struct amdgpu_ib *VAR_17,
    uint32_t VAR_18)
{
 unsigned VAR_19 = FUNC_0(VAR_16);

 FUNC_2(VAR_15, FUNC_1(VAR_12,
  0, 0, VAR_2));
 FUNC_2(VAR_15, (VAR_19 | (VAR_19 << 4)));

 FUNC_2(VAR_15, FUNC_1(VAR_9,
  0, 0, VAR_2));
 FUNC_2(VAR_15, (VAR_19 | (VAR_19 << 4)));

 FUNC_2(VAR_15, FUNC_1(VAR_11,
  0, 0, VAR_2));
 FUNC_2(VAR_15, FUNC_3(VAR_17->gpu_addr));

 FUNC_2(VAR_15, FUNC_1(VAR_10,
  0, 0, VAR_2));
 FUNC_2(VAR_15, FUNC_4(VAR_17->gpu_addr));

 FUNC_2(VAR_15, FUNC_1(VAR_5,
  0, 0, VAR_2));
 FUNC_2(VAR_15, VAR_17->length_dw);

 FUNC_2(VAR_15, FUNC_1(VAR_14,
  0, 0, VAR_2));
 FUNC_2(VAR_15, FUNC_3(VAR_15->gpu_addr));

 FUNC_2(VAR_15, FUNC_1(VAR_13,
  0, 0, VAR_2));
 FUNC_2(VAR_15, FUNC_4(VAR_15->gpu_addr));

 FUNC_2(VAR_15, FUNC_1(0, 0, VAR_0, VAR_3));
 FUNC_2(VAR_15, 0);

 FUNC_2(VAR_15, FUNC_1(VAR_6,
  0, 0, VAR_2));
 FUNC_2(VAR_15, 0x01400200);

 FUNC_2(VAR_15, FUNC_1(VAR_7,
  0, 0, VAR_2));
 FUNC_2(VAR_15, 0x2);

 FUNC_2(VAR_15, FUNC_1(VAR_8,
  0, VAR_1, VAR_4));
 FUNC_2(VAR_15, 0x2);
}
