
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DeepmindContext ;


 int VAR_0 ;

__attribute__((used)) static DeepmindContext* FUNC_0(void) {
  static bool VAR_1 = 0;
  if (!VAR_1) {
    VAR_1 = 1;
    return &VAR_0;
  } else {
    return ((void*)0);
  }
}
