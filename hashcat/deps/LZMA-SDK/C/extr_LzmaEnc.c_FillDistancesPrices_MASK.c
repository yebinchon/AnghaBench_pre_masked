
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {unsigned int* posEncoders; int distTableSize; int** posSlotPrices; unsigned int** posSlotEncoder; int** distancesPrices; scalar_t__ matchPriceCount; int * ProbPrices; } ;
typedef int CProbPrice ;
typedef unsigned int CLzmaProb ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (unsigned int const,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 size_t FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(CLzmaEnc *VAR_7)
{


  UInt32 VAR_8[VAR_3];
  unsigned VAR_9, VAR_10;

  const CProbPrice *VAR_11 = VAR_7->ProbPrices;
  VAR_7->matchPriceCount = 0;

  for (VAR_9 = VAR_6 / 2; VAR_9 < VAR_3 / 2; VAR_9++)
  {
    unsigned VAR_12 = FUNC_3(VAR_9);
    unsigned VAR_13 = (VAR_12 >> 1) - 1;
    unsigned VAR_14 = ((2 | (VAR_12 & 1)) << VAR_13);
    const CLzmaProb *VAR_15 = VAR_7->posEncoders + (size_t)VAR_14 * 2;

    UInt32 VAR_16 = 0;
    unsigned VAR_17 = 1;
    unsigned VAR_18 = VAR_9;
    unsigned VAR_19 = (unsigned)1 << VAR_13;
    VAR_14 += VAR_9;

    if (VAR_13)
    do
    {
      unsigned VAR_20 = VAR_18 & 1;
      VAR_18 >>= 1;
      VAR_16 += FUNC_0(VAR_15[VAR_17], VAR_20);
      VAR_17 = (VAR_17 << 1) + VAR_20;
    }
    while (--VAR_13);

    {
      unsigned VAR_21 = VAR_15[VAR_17];
      VAR_8[VAR_14 ] = VAR_16 + FUNC_1(VAR_21);
      VAR_8[VAR_14 + VAR_19] = VAR_16 + FUNC_2(VAR_21);
    }
  }

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  {
    unsigned VAR_22;
    unsigned VAR_23 = (VAR_7->distTableSize + 1) >> 1;
    UInt32 *VAR_24 = VAR_7->posSlotPrices[VAR_10];
    const CLzmaProb *VAR_25 = VAR_7->posSlotEncoder[VAR_10];

    for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
    {

      UInt32 VAR_26;
      unsigned VAR_27;
      unsigned VAR_28 = VAR_22 + (1 << (VAR_5 - 1));
      unsigned VAR_29;
      VAR_27 = VAR_28 & 1; VAR_28 >>= 1; VAR_26 = FUNC_0(VAR_25[VAR_28], VAR_27);
      VAR_27 = VAR_28 & 1; VAR_28 >>= 1; VAR_26 += FUNC_0(VAR_25[VAR_28], VAR_27);
      VAR_27 = VAR_28 & 1; VAR_28 >>= 1; VAR_26 += FUNC_0(VAR_25[VAR_28], VAR_27);
      VAR_27 = VAR_28 & 1; VAR_28 >>= 1; VAR_26 += FUNC_0(VAR_25[VAR_28], VAR_27);
      VAR_27 = VAR_28 & 1; VAR_28 >>= 1; VAR_26 += FUNC_0(VAR_25[VAR_28], VAR_27);
      VAR_29 = VAR_25[(size_t)VAR_22 + (1 << (VAR_5 - 1))];
      VAR_24[(size_t)VAR_22 * 2 ] = VAR_26 + FUNC_1(VAR_29);
      VAR_24[(size_t)VAR_22 * 2 + 1] = VAR_26 + FUNC_2(VAR_29);
    }

    {
      UInt32 VAR_30 = ((UInt32)((VAR_0 / 2 - 1) - VAR_1) << VAR_2);
      for (VAR_22 = VAR_0 / 2; VAR_22 < VAR_23; VAR_22++)
      {
        VAR_24[(size_t)VAR_22 * 2 ] += VAR_30;
        VAR_24[(size_t)VAR_22 * 2 + 1] += VAR_30;
        VAR_30 += ((UInt32)1 << VAR_2);
      }
    }

    {
      UInt32 *VAR_31 = VAR_7->distancesPrices[VAR_10];

      VAR_31[0] = VAR_24[0];
      VAR_31[1] = VAR_24[1];
      VAR_31[2] = VAR_24[2];
      VAR_31[3] = VAR_24[3];

      for (VAR_9 = 4; VAR_9 < VAR_3; VAR_9 += 2)
      {
        UInt32 VAR_32 = VAR_24[FUNC_3(VAR_9)];
        VAR_31[VAR_9 ] = VAR_32 + VAR_8[VAR_9];
        VAR_31[VAR_9 + 1] = VAR_32 + VAR_8[VAR_9 + 1];
      }
    }
  }

}
