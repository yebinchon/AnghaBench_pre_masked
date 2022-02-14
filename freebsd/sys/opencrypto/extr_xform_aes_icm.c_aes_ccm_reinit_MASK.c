
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct aes_icm_ctx {int* ac_block; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int*,int) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void
FUNC_2(caddr_t VAR_2, const u_int8_t *VAR_3)
{
 struct aes_icm_ctx *VAR_4;

 VAR_4 = (struct aes_icm_ctx*)VAR_2;


 FUNC_1(VAR_4->ac_block, sizeof(VAR_4->ac_block));

 VAR_4->ac_block[0] = (15 - VAR_1) - 1;
 FUNC_0(VAR_3, VAR_4->ac_block+1, VAR_1);
 VAR_4->ac_block[VAR_0 - 1] = 1;
}
