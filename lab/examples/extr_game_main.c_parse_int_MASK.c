
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 long FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static bool FUNC_1(const char* VAR_3, int* VAR_4) {
  char* VAR_5;
  VAR_2 = 0;
  long int VAR_6 = FUNC_0(VAR_3, &VAR_5, 0);
  if (VAR_5 != VAR_3 && *VAR_5 == '\0' && VAR_2 == 0 && VAR_1 <= VAR_6 && VAR_6 <= VAR_0) {
    *VAR_4 = VAR_6;
    return 1;
  }
  return 0;
}
