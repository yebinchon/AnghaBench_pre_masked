
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int* H; int blocks; } ;
typedef TYPE_1__ cf_sha1_context ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const uint8_t *VAR_1)
{
  cf_sha1_context *VAR_2 = VAR_0;


  uint32_t VAR_3[16];

  uint32_t VAR_4 = VAR_2->H[0],
           VAR_5 = VAR_2->H[1],
           VAR_6 = VAR_2->H[2],
           VAR_7 = VAR_2->H[3],
           VAR_8 = VAR_2->H[4],
           VAR_9;

  for (size_t VAR_10 = 0; VAR_10 < 80; VAR_10++)
  {







    if (VAR_10 < 16)
    {
      VAR_3[VAR_10] = VAR_9 = FUNC_0(VAR_1);
      VAR_1 += 4;
    } else {
      VAR_9 = VAR_3[(VAR_10 - 3) % 16] ^ VAR_3[(VAR_10 - 8) % 16] ^ VAR_3[(VAR_10 - 14) % 16] ^ VAR_3[(VAR_10 - 16) % 16];
      VAR_9 = FUNC_1(VAR_9, 1);
      VAR_3[VAR_10 % 16] = VAR_9;
    }

    uint32_t VAR_11, VAR_12;

    if (VAR_10 <= 19)
    {
      VAR_11 = (VAR_5 & VAR_6) | (~VAR_5 & VAR_7);
      VAR_12 = 0x5a827999;
    } else if (VAR_10 <= 39) {
      VAR_11 = VAR_5 ^ VAR_6 ^ VAR_7;
      VAR_12 = 0x6ed9eba1;
    } else if (VAR_10 <= 59) {
      VAR_11 = (VAR_5 & VAR_6) | (VAR_5 & VAR_7) | (VAR_6 & VAR_7);
      VAR_12 = 0x8f1bbcdc;
    } else {
      VAR_11 = VAR_5 ^ VAR_6 ^ VAR_7;
      VAR_12 = 0xca62c1d6;
    }

    uint32_t VAR_13 = FUNC_1(VAR_4, 5) + VAR_11 + VAR_8 + VAR_12 + VAR_9;
    VAR_8 = VAR_7;
    VAR_7 = VAR_6;
    VAR_6 = FUNC_1(VAR_5, 30);
    VAR_5 = VAR_4;
    VAR_4 = VAR_13;
  }

  VAR_2->H[0] += VAR_4;
  VAR_2->H[1] += VAR_5;
  VAR_2->H[2] += VAR_6;
  VAR_2->H[3] += VAR_7;
  VAR_2->H[4] += VAR_8;

  VAR_2->blocks++;
}
