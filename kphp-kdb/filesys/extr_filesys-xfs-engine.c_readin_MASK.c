
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void *FUNC_4 (size_t VAR_5) {
  FUNC_0 (VAR_5 >= 0);
  if (VAR_3 + VAR_5 <= VAR_4) {
    return VAR_3;
  }
  if (VAR_4 < VAR_1 + VAR_0) {
    return 0;
  }
  FUNC_2 (VAR_1, VAR_3, VAR_4 - VAR_3);
  VAR_4 -= VAR_3 - VAR_1;
  VAR_3 = VAR_1;
  int VAR_6 = FUNC_3 (VAR_2, VAR_4, VAR_1 + VAR_0 - VAR_4);
  if (VAR_6 < 0) {
    FUNC_1 ("error reading file: %m\n");
  } else {
    VAR_4 += VAR_6;
  }
  if (VAR_3 + VAR_5 <= VAR_4) {
    return VAR_3;
  } else {
    return 0;
  }
}
