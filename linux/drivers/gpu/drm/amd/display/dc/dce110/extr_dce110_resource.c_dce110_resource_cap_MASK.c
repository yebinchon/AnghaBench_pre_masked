
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_caps {int dummy; } ;
struct hw_asic_id {int hw_internal_rev; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct resource_caps const VAR_0 ;
 struct resource_caps const VAR_1 ;

const struct resource_caps *FUNC_1(
 struct hw_asic_id *VAR_2)
{
 if (FUNC_0(VAR_2->hw_internal_rev))
  return &VAR_1;
 else
  return &VAR_0;
}
