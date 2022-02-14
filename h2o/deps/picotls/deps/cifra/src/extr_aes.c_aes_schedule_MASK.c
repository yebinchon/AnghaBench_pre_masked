
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {int rounds; size_t* ks; } ;
typedef TYPE_1__ cf_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int const*) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t,int ) ;

__attribute__((used)) static void FUNC_4(cf_aes_context *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
  size_t VAR_5,
         VAR_6 = VAR_0 / 4,
         VAR_7 = VAR_4 / 4,
         VAR_8 = VAR_6 * (VAR_2->rounds + 1);
  uint32_t *VAR_9 = VAR_2->ks;


  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  {
    VAR_9[VAR_5] = FUNC_0(VAR_3 + VAR_5 * 4);
  }

  uint32_t VAR_10 = 1;
  uint32_t VAR_11 = 0;

  for (; VAR_5 < VAR_8; VAR_5++, VAR_11++)
  {
    uint32_t VAR_12 = VAR_9[VAR_5 - 1];

    if (VAR_11 == VAR_7)
    {
      VAR_10++;
      VAR_11 = 0;
    }

    if (VAR_11 == 0)
      VAR_12 = FUNC_3(FUNC_1(VAR_12), VAR_1) ^ FUNC_2(VAR_10);
    else if (VAR_7 > 6 && VAR_11 == 4)
      VAR_12 = FUNC_3(VAR_12, VAR_1);

    VAR_9[VAR_5] = VAR_9[VAR_5 - VAR_7] ^ VAR_12;
  }
}
