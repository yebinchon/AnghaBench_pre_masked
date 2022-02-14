
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ state; size_t len_aad; } ;
typedef TYPE_1__ ghash_ctx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int const*,size_t) ;

__attribute__((used)) static void FUNC_2(ghash_ctx *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
  FUNC_0(VAR_1->state == VAR_0);
  VAR_1->len_aad += VAR_3;
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
