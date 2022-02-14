
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncprange {int dummy; } ;






 char const* FUNC_0 (struct ncprange*) ;

__attribute__((used)) static const char *
FUNC_1(struct ncprange *VAR_0, unsigned VAR_1)
{
  switch (VAR_1) {
    case 128:
      return "MYADDR";
    case 129:
      return "HISADDR";
    case 131:
      return "DNS0";
    case 130:
      return "DNS1";
  }
  return FUNC_0(VAR_0);
}
