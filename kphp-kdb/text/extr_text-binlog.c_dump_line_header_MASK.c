
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char const* const,...) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

inline int FUNC_2 (const char *const VAR_5, char VAR_6) {
  if (VAR_4 > VAR_2) { return -1; }
  if (VAR_0) { FUNC_0 (VAR_3, "%s\t", FUNC_1()); }
  if (VAR_1) { FUNC_0 (VAR_3, "%s\t", VAR_2); }
  FUNC_0 (VAR_3, "%s%c", VAR_5, VAR_6);
  return 0;
}
