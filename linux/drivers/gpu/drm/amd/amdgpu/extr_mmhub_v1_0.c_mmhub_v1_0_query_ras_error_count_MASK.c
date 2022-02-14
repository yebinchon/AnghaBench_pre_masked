
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ras_err_data {int ce_count; int ue_count; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_7,
        void *VAR_8)
{
 int VAR_9;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13;
 struct ras_err_data *VAR_14 = (struct ras_err_data *)VAR_8;


 VAR_10 = FUNC_0(VAR_2, 0, VAR_4);
 VAR_11 = FUNC_0(VAR_2, 0, VAR_3);
 VAR_12 = FUNC_0(VAR_2, 0, VAR_6);
 VAR_13 = FUNC_0(VAR_2, 0, VAR_5);




 for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
  VAR_14->ce_count += (VAR_10 & VAR_0);
  VAR_14->ce_count += (VAR_12 & VAR_0);
  VAR_10 >>= VAR_1;
  VAR_12 >>= VAR_1;
  VAR_14->ue_count += (VAR_10 & VAR_0);
  VAR_14->ue_count += (VAR_12 & VAR_0);
  VAR_10 >>= VAR_1;
  VAR_12 >>= VAR_1;
 }

 for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
  VAR_14->ue_count += (VAR_10 & VAR_0);
  VAR_14->ue_count += (VAR_12 & VAR_0);
  VAR_10 >>= VAR_1;
  VAR_12 >>= VAR_1;
 }


 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  VAR_14->ce_count += (VAR_11 & VAR_0);
  VAR_14->ce_count += (VAR_13 & VAR_0);
  VAR_11 >>= VAR_1;
  VAR_13 >>= VAR_1;
  VAR_14->ue_count += (VAR_11 & VAR_0);
  VAR_14->ue_count += (VAR_13 & VAR_0);
  VAR_11 >>= VAR_1;
  VAR_13 >>= VAR_1;
 }

 for (VAR_9 = 0; VAR_9 < 6; VAR_9++) {
  VAR_14->ue_count += (VAR_11 & VAR_0);
  VAR_14->ue_count += (VAR_13 & VAR_0);
  VAR_11 >>= VAR_1;
  VAR_13 >>= VAR_1;
 }
}
