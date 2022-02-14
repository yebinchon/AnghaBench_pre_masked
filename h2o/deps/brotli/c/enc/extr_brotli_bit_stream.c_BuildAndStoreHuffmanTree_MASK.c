
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int depth ;
typedef int HuffmanTree ;


 int FUNC_0 (scalar_t__*,size_t const,scalar_t__*) ;
 int FUNC_1 (scalar_t__ const*,size_t const,int,int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,size_t const,int *,size_t*,scalar_t__*) ;
 int FUNC_3 (size_t,size_t,size_t*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,size_t*,size_t,size_t,size_t*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int ,size_t const) ;

__attribute__((used)) static void FUNC_6(const uint32_t *VAR_0,
                                     const size_t VAR_1,
                                     HuffmanTree* VAR_2,
                                     uint8_t* VAR_3,
                                     uint16_t* VAR_4,
                                     size_t* VAR_5,
                                     uint8_t* VAR_6) {
  size_t VAR_7 = 0;
  size_t VAR_8[4] = { 0 };
  size_t VAR_9;
  size_t VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
    if (VAR_0[VAR_9]) {
      if (VAR_7 < 4) {
        VAR_8[VAR_7] = VAR_9;
      } else if (VAR_7 > 4) {
        break;
      }
      VAR_7++;
    }
  }

  {
    size_t VAR_11 = VAR_1 - 1;
    while (VAR_11) {
      VAR_11 >>= 1;
      ++VAR_10;
    }
  }

  if (VAR_7 <= 1) {
    FUNC_3(4, 1, VAR_5, VAR_6);
    FUNC_3(VAR_10, VAR_8[0], VAR_5, VAR_6);
    VAR_3[VAR_8[0]] = 0;
    VAR_4[VAR_8[0]] = 0;
    return;
  }

  FUNC_5(VAR_3, 0, VAR_1 * sizeof(VAR_3[0]));
  FUNC_1(VAR_0, VAR_1, 15, VAR_2, VAR_3);
  FUNC_0(VAR_3, VAR_1, VAR_4);

  if (VAR_7 <= 4) {
    FUNC_4(VAR_3, VAR_8, VAR_7, VAR_10, VAR_5, VAR_6);
  } else {
    FUNC_2(VAR_3, VAR_1, VAR_2, VAR_5, VAR_6);
  }
}
