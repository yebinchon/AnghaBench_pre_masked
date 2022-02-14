
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int ** A; } ;
typedef TYPE_1__ cf_sha3_context ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(cf_sha3_context *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
  uint16_t VAR_3 = (VAR_2 + 7) / 8;

  for (uint16_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  {
    if (VAR_2 >= 8)
    {
      FUNC_1(&VAR_0->A[VAR_4][VAR_5], VAR_1);
      VAR_1 += 8;
      VAR_2 -= 8;
    } else {
      uint8_t VAR_7[8];
      FUNC_1(&VAR_0->A[VAR_4][VAR_5], VAR_7);
      FUNC_0(VAR_1, VAR_7, VAR_2);
      VAR_1 += VAR_2;
      VAR_2 = 0;
    }

    VAR_4++;
    if (VAR_4 == 5)
    {
      VAR_5++;
      VAR_4 = 0;
    }
  }
}
