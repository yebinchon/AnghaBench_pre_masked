
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t FUNC_0 (char const* const*) ;

const char *FUNC_1(u32 VAR_0)
{
 static const char * const VAR_1[] = {
  "PHYS_NOP",
  "reserved1",
  "PHYS_POLL",
  "PHYS_DISABLED",
  "PHYS_TRAINING",
  "PHYS_LINKUP",
  "PHYS_LINK_ERR_RECOVER",
  "PHYS_PHY_TEST",
  "reserved8",
  "PHYS_OFFLINE",
  "PHYS_GANGED",
  "PHYS_TEST",
 };
 if (VAR_0 < FUNC_0(VAR_1))
  return VAR_1[VAR_0];
 return "unknown";
}
