
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

ll FUNC_2 (void) {
  static ll VAR_3 = -1;
  if (VAR_3 == -1) {
    VAR_3 = ((ll)FUNC_1(VAR_0) + 1001) * 1000000;
    VAR_3 /= VAR_2;
    VAR_3 *= VAR_2;
    VAR_3 += VAR_1;
  }
  VAR_3 += VAR_2;
  FUNC_0 (VAR_3 > 1000000000);
  return VAR_3;
}
