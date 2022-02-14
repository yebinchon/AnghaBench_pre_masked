
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ state; size_t len_cipher; } ;
typedef TYPE_1__ ghash_ctx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(ghash_ctx *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
  if (VAR_2->state == VAR_0)
  {
    FUNC_2(VAR_2);
    VAR_2->state = VAR_1;
  }

  FUNC_0(VAR_2->state == VAR_1);
  VAR_2->len_cipher += VAR_4;
  FUNC_1(VAR_2, VAR_3, VAR_4);
}
