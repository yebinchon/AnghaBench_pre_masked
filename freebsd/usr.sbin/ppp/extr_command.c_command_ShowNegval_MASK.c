
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(unsigned VAR_0)
{
  switch (VAR_0&3) {
    case 1: return "disabled & accepted";
    case 2: return "enabled & denied";
    case 3: return "enabled & accepted";
  }
  return "disabled & denied";
}
