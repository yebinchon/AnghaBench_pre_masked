
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * nonce; } ;
typedef TYPE_1__ cf_salsa20_ctx ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  cf_salsa20_ctx VAR_0;
  uint8_t VAR_1[32], VAR_2[8], VAR_3[64], VAR_4[64];

  FUNC_5(VAR_1, 32, "0102030405060708090a0b0c0d0e0f10c9cacbcccdcecfd0d1d2d3d4d5d6d7d8");
  FUNC_4(VAR_2, 0, 8);

  FUNC_2(&VAR_0, VAR_1, sizeof VAR_1, VAR_2);
  FUNC_5(VAR_0.nonce, 16, "65666768696a6b6c6d6e6f7071727374");
  FUNC_4(VAR_3, 0, 64);
  FUNC_1(&VAR_0, VAR_3, VAR_3, 64);

  FUNC_5(VAR_4, 64, "45254427290f6bc1ff8b7a06aae9d9625990b66a1533c841ef31de22d772287e68c507e1c5991f02664e4cb054f5f6b8b1a0858206489577c0c384ecea67f64a");
  FUNC_0(FUNC_3(VAR_4, VAR_3, 64) == 0);

  FUNC_2(&VAR_0, VAR_1, 16, VAR_2);
  FUNC_5(VAR_0.nonce, 16, "65666768696a6b6c6d6e6f7071727374");
  FUNC_4(VAR_3, 0, 64);
  FUNC_1(&VAR_0, VAR_3, VAR_3, 64);

  FUNC_5(VAR_4, 64, "27ad2ef81ec852113043feef25120df7f1c83d900a3732b9062ff6fd8f56bbe186556ef6a1a32bebe75eab3391d6701d0ee80510978cb78dab097ab568b6b1c1");
  FUNC_0(FUNC_3(VAR_4, VAR_3, 64) == 0);
}
