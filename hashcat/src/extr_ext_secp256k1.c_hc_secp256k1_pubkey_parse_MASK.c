
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int secp256k1_pubkey ;
typedef int secp256k1_context ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,size_t) ;

bool FUNC_3 (secp256k1_pubkey *VAR_1, u8 *VAR_2, size_t VAR_3)
{
  secp256k1_context *VAR_4 = FUNC_0 (VAR_0);

  if (FUNC_2 (VAR_4, VAR_1, VAR_2, VAR_3) == 0)
  {
    FUNC_1 (VAR_4);

    return 0;
  }

  FUNC_1 (VAR_4);

  return 1;
}
