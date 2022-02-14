
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_hub_nmi_s {scalar_t__ pch_owner; scalar_t__ hub_present; } ;


 int FUNC_0 (struct uv_hub_nmi_s*) ;
 int FUNC_1 (struct uv_hub_nmi_s*) ;

__attribute__((used)) static int FUNC_2(struct uv_hub_nmi_s *VAR_0)
{
 if (VAR_0->hub_present)
  return FUNC_1(VAR_0);

 if (VAR_0->pch_owner)
  return FUNC_0(VAR_0);

 return -1;
}
