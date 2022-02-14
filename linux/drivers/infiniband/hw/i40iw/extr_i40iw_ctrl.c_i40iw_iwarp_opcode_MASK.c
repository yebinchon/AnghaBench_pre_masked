
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i40iw_aeqe_info {scalar_t__ q2_data_written; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct i40iw_aeqe_info *VAR_0, u8 *VAR_1)
{
 __be16 *VAR_2;
 u32 VAR_3 = 0xffffffff;

 if (VAR_0->q2_data_written) {
  VAR_2 = (__be16 *)VAR_1;
  VAR_3 = FUNC_0(VAR_2[1]) & 0xf;
 }
 return VAR_3;
}
