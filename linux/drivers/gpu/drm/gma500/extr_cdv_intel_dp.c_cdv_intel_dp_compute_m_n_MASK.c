
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdv_intel_dp_m_n {int tu; int gmch_m; int gmch_n; int link_m; int link_n; } ;


 int FUNC_0 (int*,int*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0,
       int VAR_1,
       int VAR_2,
       int VAR_3,
       struct cdv_intel_dp_m_n *VAR_4)
{
 VAR_4->tu = 64;
 VAR_4->gmch_m = (VAR_2 * VAR_0 + 7) >> 3;
 VAR_4->gmch_n = VAR_3 * VAR_1;
 FUNC_0(&VAR_4->gmch_m, &VAR_4->gmch_n);
 VAR_4->link_m = VAR_2;
 VAR_4->link_n = VAR_3;
 FUNC_0(&VAR_4->link_m, &VAR_4->link_n);
}
