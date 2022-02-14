
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int secp256k1_scalar ;
typedef int secp256k1_pubkey ;
typedef int secp256k1_gej ;
struct TYPE_5__ {int x; int y; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,size_t*,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int*) ;
 int FUNC_4 (int *,TYPE_1__*,int *,size_t const) ;
 int FUNC_5 (int*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int*,int*) ;

bool FUNC_13 (secp256k1_pubkey *VAR_3, u8 *VAR_4, size_t VAR_5)
{


  secp256k1_context *VAR_6 = FUNC_0 (VAR_0);

  secp256k1_gej VAR_7;
  secp256k1_ge VAR_8;



  FUNC_9 (VAR_6, &VAR_8, VAR_3);

  int VAR_9 = 0;

  secp256k1_scalar VAR_10;

  FUNC_12 (&VAR_10, VAR_4, &VAR_9);

  if (VAR_9 != 0)
  {
    FUNC_10 (&VAR_10);

    FUNC_1 (VAR_6);

    return 0;
  }

  if (FUNC_11 (&VAR_10))
  {
    FUNC_10 (&VAR_10);

    FUNC_1 (VAR_6);

    return 0;
  }




  const size_t VAR_11 = (VAR_5 - 1) * 8;

  FUNC_4 (&VAR_7, &VAR_8, &VAR_10, VAR_11);
  FUNC_8 (&VAR_8, &VAR_7);
  FUNC_7 (&VAR_8.x);
  FUNC_7 (&VAR_8.y);




  VAR_4[0] = 0x02 | FUNC_6 (&VAR_8.y);

  FUNC_5 (VAR_4 + 1, &VAR_8.x);




  FUNC_10 (&VAR_10);

  FUNC_1 (VAR_6);
  return 1;
}
