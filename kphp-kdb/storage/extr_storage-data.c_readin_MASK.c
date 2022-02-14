
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void *FUNC_4 (size_t VAR_6) {
  FUNC_0 (VAR_6 >= 0);
  if (VAR_3 + VAR_6 <= VAR_5) {
    return VAR_3;
  }
  if (VAR_5 < VAR_2 + VAR_0) {
    return 0;
  }
  FUNC_2 (VAR_2, VAR_3, VAR_5 - VAR_3);
  VAR_5 -= VAR_3 - VAR_2;
  VAR_3 = VAR_2;
  int VAR_7 = FUNC_3 (VAR_1, VAR_5, VAR_2 + VAR_0 - VAR_5);
  if (VAR_7 < 0) {
    FUNC_1 (VAR_4, "error reading file: %m\n");
  } else {
    VAR_5 += VAR_7;
  }
  if (VAR_3 + VAR_6 <= VAR_5) {
    return VAR_3;
  } else {
    return 0;
  }
}
