
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const,int) ;

unsigned FUNC_1 (const char *const VAR_0, int VAR_1) {
  unsigned VAR_2 = (FUNC_0 (VAR_0, VAR_1) >> 8) & 0x7fffff;
  return VAR_2 ? VAR_2 : 1;
}
