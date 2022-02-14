
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6 (const char *VAR_4) {
  int VAR_5 = FUNC_5 (VAR_4);
  VAR_1 = FUNC_4 (VAR_4);
  VAR_3 = FUNC_1 (VAR_5 + 6);
  FUNC_3 (VAR_3, VAR_4);
  FUNC_3 (VAR_3 + VAR_5, "-fake");
  FUNC_0 (VAR_1 && VAR_3);
  VAR_0 = FUNC_2 (VAR_1, 0);
  if (!VAR_0) {
    return -1;
  }
  VAR_2 = FUNC_2 (VAR_3, 1);
  if (!VAR_2) {
    return 0;
  }
  return 1;
}
