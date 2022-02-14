
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int constant; int key1; int key0; } ;
typedef TYPE_1__ cf_chacha20_ctx ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_2(cf_chacha20_ctx *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
  switch (VAR_4)
  {
    case 16:
      FUNC_1(VAR_2->key0, VAR_3, 16);
      FUNC_1(VAR_2->key1, VAR_3, 16);
      VAR_2->constant = VAR_1;
      break;
    case 32:
      FUNC_1(VAR_2->key0, VAR_3, 16);
      FUNC_1(VAR_2->key1, VAR_3 + 16, 16);
      VAR_2->constant = VAR_0;
      break;
    default:
      FUNC_0();
  }
}
