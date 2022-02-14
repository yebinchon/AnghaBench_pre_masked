
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct aes_icm_ctx {int* ac_block; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void
FUNC_2(caddr_t VAR_1, const u_int8_t *VAR_2)
{
 struct aes_icm_ctx *VAR_3;

 FUNC_0(VAR_1, VAR_2);

 VAR_3 = (struct aes_icm_ctx *)VAR_1;

 FUNC_1(&VAR_3->ac_block[VAR_0 - 4], 4);
 VAR_3->ac_block[VAR_0 - 1] = 2;
}
