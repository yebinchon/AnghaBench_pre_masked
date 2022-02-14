
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_4)
{
 if (VAR_0)
  FUNC_0(VAR_1, "%sexit(0);\n", VAR_4);
 else {
  if (VAR_3) {
   if (VAR_2)
    FUNC_0(VAR_1, "%spthread_mutex_lock(&_svcstate_lock);\n", VAR_4);
    FUNC_0(VAR_1, "%s_rpcsvcstate = _SERVED;\n", VAR_4);
   if (VAR_2)
    FUNC_0(VAR_1, "%spthread_mutex_unlock(&_svcstate_lock);\n", VAR_4);
  }
  FUNC_0(VAR_1, "%sreturn;\n", VAR_4);
 }
}
