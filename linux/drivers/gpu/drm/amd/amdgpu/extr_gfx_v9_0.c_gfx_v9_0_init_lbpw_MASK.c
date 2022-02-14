
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int grbm_idx_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_19)
{
 uint32_t VAR_20;


 FUNC_2(VAR_2, 0, VAR_15, 0x0000007F);
 FUNC_2(VAR_2, 0, VAR_16, 0x0333A5A7);
 FUNC_2(VAR_2, 0, VAR_17, 0x00000077);
 FUNC_2(VAR_2, 0, VAR_18, (0x30 | 0x40 << 8 | 0x02FA << 16));


 FUNC_2(VAR_2, 0, VAR_11, 0x00000000);


 FUNC_2(VAR_2, 0, VAR_12, 0x00000500);

 FUNC_5(&VAR_19->grbm_idx_mutex);

 FUNC_4(VAR_19, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_2(VAR_2, 0, VAR_13, 0xffffffff);


 VAR_20 = FUNC_0(0, VAR_8, VAR_1, 0x0003);
 VAR_20 |= FUNC_0(VAR_20, VAR_8, VAR_3, 0x0010);
 VAR_20 |= FUNC_0(VAR_20, VAR_8, VAR_4, 0x033F);
 FUNC_2(VAR_2, 0, VAR_14, VAR_20);


 VAR_20 = FUNC_1(VAR_2, 0, VAR_9);
 VAR_20 &= 0x0000FFFF;
 VAR_20 |= 0x00C00000;
 FUNC_2(VAR_2, 0, VAR_9, VAR_20);
 VAR_20 = VAR_7;
 VAR_20 |= FUNC_0(VAR_20, VAR_6, VAR_0, 0x09);
 VAR_20 |= FUNC_0(VAR_20, VAR_6, VAR_5, 0x80000);
 FUNC_2(VAR_2, 0, VAR_10, VAR_20);
 FUNC_6(&VAR_19->grbm_idx_mutex);

 FUNC_3(VAR_19);
}
