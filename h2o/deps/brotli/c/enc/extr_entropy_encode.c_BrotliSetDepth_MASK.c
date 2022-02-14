
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int index_left_; int index_right_or_value_; } ;
typedef TYPE_1__ HuffmanTree ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

BROTLI_BOOL FUNC_1(
    int VAR_2, HuffmanTree* VAR_3, uint8_t* VAR_4, int VAR_5) {
  int VAR_6[16];
  int VAR_7 = 0;
  int VAR_8 = VAR_2;
  FUNC_0(VAR_5 <= 15);
  VAR_6[0] = -1;
  while (VAR_1) {
    if (VAR_3[VAR_8].index_left_ >= 0) {
      VAR_7++;
      if (VAR_7 > VAR_5) return VAR_0;
      VAR_6[VAR_7] = VAR_3[VAR_8].index_right_or_value_;
      VAR_8 = VAR_3[VAR_8].index_left_;
      continue;
    } else {
      VAR_4[VAR_3[VAR_8].index_right_or_value_] = (uint8_t)VAR_7;
    }
    while (VAR_7 >= 0 && VAR_6[VAR_7] == -1) VAR_7--;
    if (VAR_7 < 0) return VAR_1;
    VAR_8 = VAR_6[VAR_7];
    VAR_6[VAR_7] = -1;
  }
}
