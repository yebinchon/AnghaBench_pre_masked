
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ state; int len_aad; int len_cipher; scalar_t__ buffer_used; int Y; } ;
typedef TYPE_1__ ghash_ctx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(ghash_ctx *VAR_3, uint8_t VAR_4[16])
{
  uint8_t VAR_5[8];

  if (VAR_3->state == VAR_0 || VAR_3->state == VAR_1)
  {
    FUNC_3(VAR_3);
    VAR_3->state = VAR_2;
  }


  FUNC_4(VAR_3->len_aad * 8, VAR_5);
  FUNC_2(VAR_3, VAR_5, sizeof VAR_5);

  FUNC_4(VAR_3->len_cipher * 8, VAR_5);
  FUNC_2(VAR_3, VAR_5, sizeof VAR_5);

  FUNC_0(VAR_3->buffer_used == 0);
  FUNC_1(VAR_3->Y, VAR_4);
}
