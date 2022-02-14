
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (unsigned int,int *,int ) ;

__attribute__((used)) static const char *
FUNC_1(unsigned VAR_0)
{
  static const char *VAR_1[] = { "IFACEID", "COMPPROTO" };

  if (VAR_0 > 0 && VAR_0 <= sizeof VAR_1 / sizeof *VAR_1)
    return VAR_1[VAR_0 - 1];

  return FUNC_0(VAR_0, ((void*)0), 0);
}
