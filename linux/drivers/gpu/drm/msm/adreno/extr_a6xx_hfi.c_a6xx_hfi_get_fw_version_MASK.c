
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_hfi_msg_fw_version {int supported_version; int member_0; } ;
struct a6xx_gmu {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct a6xx_gmu*,int ,struct a6xx_hfi_msg_fw_version*,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct a6xx_gmu *VAR_1, u32 *VAR_2)
{
 struct a6xx_hfi_msg_fw_version VAR_3 = { 0 };


 VAR_3.supported_version = (1 << 28) | (1 << 16);

 return FUNC_0(VAR_1, VAR_0, &VAR_3, sizeof(VAR_3),
  VAR_2, sizeof(*VAR_2));
}
