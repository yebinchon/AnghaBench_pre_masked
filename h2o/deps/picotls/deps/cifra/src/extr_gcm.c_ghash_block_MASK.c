
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int Y; int H; } ;
typedef TYPE_1__ ghash_ctx ;
typedef int cf_gf128 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, const uint8_t *VAR_1)
{
  ghash_ctx *VAR_2 = VAR_0;
  cf_gf128 VAR_3;
  FUNC_1(VAR_1, VAR_3);
  FUNC_0(VAR_3, VAR_2->Y, VAR_2->Y);
  FUNC_2(VAR_2->Y, VAR_2->H, VAR_2->Y);
}
