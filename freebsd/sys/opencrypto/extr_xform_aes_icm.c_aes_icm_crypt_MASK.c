
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct aes_icm_ctx {scalar_t__* ac_block; int ac_nr; int ac_ek; } ;
typedef int keystream ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_2(caddr_t VAR_1, u_int8_t *VAR_2)
{
 struct aes_icm_ctx *VAR_3;
 u_int8_t VAR_4[VAR_0];
 int VAR_5;

 VAR_3 = (struct aes_icm_ctx *)VAR_1;
 FUNC_1(VAR_3->ac_ek, VAR_3->ac_nr, VAR_3->ac_block, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2[VAR_5] ^= VAR_4[VAR_5];
 FUNC_0(VAR_4, sizeof(VAR_4));


 for (VAR_5 = VAR_0 - 1;
      VAR_5 >= 0; VAR_5--)
  if (++VAR_3->ac_block[VAR_5])
   break;
}
