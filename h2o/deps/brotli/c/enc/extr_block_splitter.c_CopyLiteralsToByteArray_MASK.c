
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t insert_len_; } ;
typedef TYPE_1__ Command ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int const*,size_t) ;

__attribute__((used)) static void FUNC_2(const Command* VAR_0,
                                    const size_t VAR_1,
                                    const uint8_t* VAR_2,
                                    const size_t VAR_3,
                                    const size_t VAR_4,
                                    uint8_t* VAR_5) {
  size_t VAR_6 = 0;
  size_t VAR_7 = VAR_3 & VAR_4;
  size_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
    size_t VAR_9 = VAR_0[VAR_8].insert_len_;
    if (VAR_7 + VAR_9 > VAR_4) {
      size_t VAR_10 = VAR_4 + 1 - VAR_7;
      FUNC_1(VAR_5 + VAR_6, VAR_2 + VAR_7, VAR_10);
      VAR_7 = 0;
      VAR_6 += VAR_10;
      VAR_9 -= VAR_10;
    }
    if (VAR_9 > 0) {
      FUNC_1(VAR_5 + VAR_6, VAR_2 + VAR_7, VAR_9);
      VAR_6 += VAR_9;
    }
    VAR_7 = (VAR_7 + VAR_9 + FUNC_0(&VAR_0[VAR_8])) & VAR_4;
  }
}
