
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1 (void) {
  if (VAR_1) {
    FUNC_0 (VAR_0, "extra %d bytes after query", VAR_1);
    return -1;
  }
  return 1;
}
