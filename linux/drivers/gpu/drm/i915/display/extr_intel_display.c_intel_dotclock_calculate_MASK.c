
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_link_m_n {int link_n; int link_m; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(int VAR_0,
        const struct intel_link_m_n *VAR_1)
{
 if (!VAR_1->link_n)
  return 0;

 return FUNC_0(FUNC_1(VAR_1->link_m, VAR_0), VAR_1->link_n);
}
