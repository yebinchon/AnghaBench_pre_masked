
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 size_t FUNC_1 (int,int,int ) ;
 double FUNC_2 (int*,int,size_t*) ;

__attribute__((used)) static BROTLI_BOOL FUNC_3(const uint8_t* VAR_3,
    size_t VAR_4, size_t VAR_5, size_t VAR_6, int VAR_7, size_t VAR_8,
    size_t* VAR_9, const uint32_t** VAR_10) {
  static const uint32_t VAR_11[64] = {
    11, 11, 12, 12,
    0, 0, 0, 0,
    1, 1, 9, 9,
    2, 2, 2, 2,
    1, 1, 1, 1,
    8, 3, 3, 3,
    1, 1, 1, 1,
    2, 2, 2, 2,
    8, 4, 4, 4,
    8, 7, 4, 4,
    8, 0, 0, 0,
    3, 3, 3, 3,
    5, 5, 10, 5,
    5, 5, 10, 5,
    6, 6, 6, 6,
    6, 6, 6, 6,
  };
  FUNC_0(VAR_7);

  if (VAR_8 < (1 << 20)) {
    return VAR_0;
  } else {
    const size_t VAR_12 = VAR_4 + VAR_5;



    uint32_t VAR_13[32] = { 0 };
    uint32_t VAR_14[13][32] = { { 0 } };
    uint32_t VAR_15 = 0;
    double VAR_16[3];
    size_t VAR_17;
    size_t VAR_18;
    for (; VAR_4 + 64 <= VAR_12; VAR_4 += 4096) {
      const size_t VAR_19 = VAR_4 + 64;
      uint8_t VAR_20 = VAR_3[VAR_4 & VAR_6];
      uint8_t VAR_21 = VAR_3[(VAR_4 + 1) & VAR_6];
      size_t VAR_22;


      for (VAR_22 = VAR_4 + 2; VAR_22 < VAR_19; ++VAR_22) {
        const uint8_t VAR_23 = VAR_3[VAR_22 & VAR_6];
        const uint8_t VAR_24 = (uint8_t)VAR_11[
            FUNC_1(VAR_21, VAR_20, VAR_2)];
        ++VAR_15;
        ++VAR_13[VAR_23 >> 3];
        ++VAR_14[VAR_24][VAR_23 >> 3];
        VAR_20 = VAR_21;
        VAR_21 = VAR_23;
      }
    }
    VAR_16[1] = FUNC_2(VAR_13, 32, &VAR_17);
    VAR_16[2] = 0;
    for (VAR_18 = 0; VAR_18 < 13; ++VAR_18) {
      VAR_16[2] += FUNC_2(&VAR_14[VAR_18][0], 32, &VAR_17);
    }
    VAR_16[0] = 1.0 / (double)VAR_15;
    VAR_16[1] *= VAR_16[0];
    VAR_16[2] *= VAR_16[0];







    if (VAR_16[2] > 3.0 || VAR_16[1] - VAR_16[2] < 0.2) {
      return VAR_0;
    } else {
      *VAR_9 = 13;
      *VAR_10 = VAR_11;
      return VAR_1;
    }
  }
}
