
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * s; } ;
typedef TYPE_1__ norx32_ctx ;
struct TYPE_4__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ blockctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, const uint8_t *VAR_3)
{
  blockctx *VAR_4 = VAR_2;
  norx32_ctx *VAR_5 = VAR_4->ctx;


  for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  {
    VAR_5->s[VAR_6] ^= FUNC_0(VAR_3);
    VAR_3 += VAR_1;
  }
}
