
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2 (char *VAR_5, int VAR_6) {
  if (VAR_2 - VAR_0 > VAR_1 - VAR_6) {
    if (VAR_4 >= 1) {
      FUNC_0 (VAR_3, "Buffer size %d seems to be too small. Skipping read.\n", VAR_1);
    }
    return 0;
  }
  FUNC_1 (VAR_5, VAR_2, VAR_6);
  VAR_2 += VAR_6;
  return VAR_6;
}
