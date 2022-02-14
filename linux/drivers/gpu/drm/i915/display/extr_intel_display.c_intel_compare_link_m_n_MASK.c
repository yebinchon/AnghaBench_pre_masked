
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_link_m_n {scalar_t__ tu; int link_n; int link_m; int gmch_n; int gmch_m; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int) ;

__attribute__((used)) static bool
FUNC_1(const struct intel_link_m_n *VAR_0,
         const struct intel_link_m_n *VAR_1,
         bool VAR_2)
{
 return VAR_0->tu == VAR_1->tu &&
  FUNC_0(VAR_0->gmch_m, VAR_0->gmch_n,
      VAR_1->gmch_m, VAR_1->gmch_n, VAR_2) &&
  FUNC_0(VAR_0->link_m, VAR_0->link_n,
      VAR_1->link_m, VAR_1->link_n, VAR_2);
}
