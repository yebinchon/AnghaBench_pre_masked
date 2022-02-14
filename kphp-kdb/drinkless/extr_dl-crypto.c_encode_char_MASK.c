
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

inline char FUNC_1 (char VAR_0) {
  if ('A' <= VAR_0 && VAR_0 <= 'Z') {
    return (char)(VAR_0 - 'A');
  }
  if ('a' <= VAR_0 && VAR_0 <= 'z') {
    return (char)(VAR_0 - 'a' + 26);
  }
  if ('0' <= VAR_0 && VAR_0 <= '9') {
    return (char)(VAR_0 - '0' + 26 + 26);
  }
  if (VAR_0 == '_') {
    return (char)(10 + 26 + 26);
  }
  FUNC_0 (0);
}
