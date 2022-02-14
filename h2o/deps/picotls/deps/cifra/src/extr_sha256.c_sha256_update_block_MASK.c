
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int blocks; scalar_t__* H; } ;
typedef TYPE_1__ cf_sha256_context ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, const uint8_t *VAR_2)
{
  cf_sha256_context *VAR_3 = VAR_1;


  uint32_t VAR_4[16];

  uint32_t VAR_5 = VAR_3->H[0],
           VAR_6 = VAR_3->H[1],
           VAR_7 = VAR_3->H[2],
           VAR_8 = VAR_3->H[3],
           VAR_9 = VAR_3->H[4],
           VAR_10 = VAR_3->H[5],
           VAR_11 = VAR_3->H[6],
           VAR_12 = VAR_3->H[7],
           VAR_13;

  size_t VAR_14;
  for (VAR_14 = 0; VAR_14 < 64; VAR_14++)
  {







    if (VAR_14 < 16)
    {
      VAR_4[VAR_14] = VAR_13 = FUNC_6(VAR_2);
      VAR_2 += 4;
    } else {
      VAR_13 = FUNC_5(VAR_4[(VAR_14 - 2) % 16]) +
           VAR_4[(VAR_14 - 7) % 16] +
           FUNC_4(VAR_4[(VAR_14 - 15) % 16]) +
           VAR_4[(VAR_14 - 16) % 16];
      VAR_4[VAR_14 % 16] = VAR_13;
    }

    uint32_t VAR_15 = VAR_12 + FUNC_1(VAR_9) + FUNC_2(VAR_9, VAR_10, VAR_11) + VAR_0[VAR_14] + VAR_13;
    uint32_t VAR_16 = FUNC_0(VAR_5) + FUNC_3(VAR_5, VAR_6, VAR_7);
    VAR_12 = VAR_11;
    VAR_11 = VAR_10;
    VAR_10 = VAR_9;
    VAR_9 = VAR_8 + VAR_15;
    VAR_8 = VAR_7;
    VAR_7 = VAR_6;
    VAR_6 = VAR_5;
    VAR_5 = VAR_15 + VAR_16;
  }

  VAR_3->H[0] += VAR_5;
  VAR_3->H[1] += VAR_6;
  VAR_3->H[2] += VAR_7;
  VAR_3->H[3] += VAR_8;
  VAR_3->H[4] += VAR_9;
  VAR_3->H[5] += VAR_10;
  VAR_3->H[6] += VAR_11;
  VAR_3->H[7] += VAR_12;

  VAR_3->blocks++;
}
