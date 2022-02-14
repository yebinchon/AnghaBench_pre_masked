
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2 (off_t VAR_3) {
  int VAR_4, VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    if (VAR_1[VAR_4] >= 0 && FUNC_1 (VAR_1[VAR_4], VAR_3, VAR_0) == VAR_3) {
      VAR_5++;
    } else {
      if (VAR_1[VAR_4] >= 0) {
        FUNC_0 (VAR_1[VAR_4]);
        VAR_1[VAR_4] = -1;
      }
    }
  }
  return VAR_5;
}
