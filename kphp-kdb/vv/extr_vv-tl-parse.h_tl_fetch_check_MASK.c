
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int,int,int) ;

__attribute__((used)) static inline int FUNC_2 (int VAR_6) {
  if (!VAR_5) {
    FUNC_0 ("Trying to read from unitialized in buffer", VAR_1);
    return -1;
  }
  if (VAR_6 >= 0) {
    if (VAR_4 < VAR_6) {
      FUNC_1 (VAR_2, "Trying to read %d bytes at position %d (size = %d)", VAR_6, VAR_3, VAR_3 + VAR_4);
      return -1;
    }
  } else {
    if (VAR_3 < -VAR_6) {
      FUNC_1 (VAR_2, "Trying to read %d bytes at position %d (size = %d)", VAR_6, VAR_3, VAR_3 + VAR_4);
      return -1;
    }
  }
  if (VAR_0) {
    return -1;
  }
  return 0;
}
