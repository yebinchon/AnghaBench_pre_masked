
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (int) ;

inline char FUNC_1 (char VAR_1) {
  FUNC_0 (0 <= VAR_1 && VAR_1 < VAR_0);
  if (VAR_1 < 26) {
    return (char)(VAR_1 + 'A');
  }
  VAR_1 = (char)(VAR_1 - 26);
  if (VAR_1 < 26) {
    return (char)(VAR_1 + 'a');
  }
  VAR_1 = (char)(VAR_1 - 26);
  if (VAR_1 < 10) {
    return (char)(VAR_1 + '0');
  }
  return '_';
}
