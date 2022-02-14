
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static inline int FUNC_4 (int VAR_3) {
  if (FUNC_0 (4) < 0) {
    return -1;
  }
  int VAR_4 = 0;
  FUNC_1 (&VAR_4, 1);
  if (VAR_4 == 255) {
    FUNC_2 ("String len can not start with 0xff", VAR_0);
    return -1;
  }
  if (VAR_4 == 254) {
    FUNC_1 (&VAR_4, 3);
  }
  if (VAR_4 > VAR_3) {
    FUNC_3 (VAR_1, "string is too long: max_len = %d, len = %d", VAR_3, VAR_4);
    return -1;
  }
  if (VAR_4 > VAR_2) {
    FUNC_3 (VAR_0, "string is too long: remaining_bytes = %d, len = %d", VAR_2, VAR_4);
    return -1;
  }
  return VAR_4;
}
