
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_gisb_arb_device {int valid_mask; char const** master_names; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static const char *
FUNC_2(struct brcmstb_gisb_arb_device *VAR_0,
      u32 VAR_1)
{
 u32 VAR_2 = VAR_0->valid_mask & VAR_1;

 if (FUNC_1(VAR_2) != 1)
  return ((void*)0);

 return VAR_0->master_names[FUNC_0(VAR_2) - 1];
}
