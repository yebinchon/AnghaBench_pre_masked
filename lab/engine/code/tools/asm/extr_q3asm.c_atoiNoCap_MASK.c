
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INT64 ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1 (const char *VAR_0)
{
  INT64 VAR_1;
  union {
    unsigned int u;
    signed int i;
  } VAR_2;

  VAR_1 = FUNC_0(VAR_0);

  if (VAR_1 < 0) {
    VAR_2.i = (int)VAR_1;
  } else {
    VAR_2.u = (unsigned int)VAR_1;
  }
  return VAR_2.i;
}
