
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_1 (int,scalar_t__,int) ;

off_t FUNC_2 (int VAR_3, off_t VAR_4, int VAR_5) {
  FUNC_0 (0 <= VAR_3 && VAR_3 < VAR_0);
  FUNC_0 (VAR_1[VAR_3] != -1);

  off_t VAR_6 = FUNC_1 (VAR_1[VAR_3], VAR_4, VAR_5);
  if (VAR_6 != (off_t)-1) {
    VAR_2[VAR_3] = VAR_6;
  }
  return VAR_6;
}
