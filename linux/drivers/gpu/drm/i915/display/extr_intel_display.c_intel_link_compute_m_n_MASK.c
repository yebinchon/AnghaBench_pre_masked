
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct intel_link_m_n {int tu; int link_n; int link_m; int gmch_n; int gmch_m; } ;


 int FUNC_0 (int,int,int *,int *,int) ;
 int FUNC_1 (int) ;

void
FUNC_2(u16 VAR_0, int VAR_1,
         int VAR_2, int VAR_3,
         struct intel_link_m_n *VAR_4,
         bool VAR_5, bool VAR_6)
{
 u32 VAR_7 = VAR_0 * VAR_2;

 if (VAR_6)
  VAR_7 = FUNC_1(VAR_7);

 VAR_4->tu = 64;
 FUNC_0(VAR_7,
      VAR_3 * VAR_1 * 8,
      &VAR_4->gmch_m, &VAR_4->gmch_n,
      VAR_5);

 FUNC_0(VAR_2, VAR_3,
      &VAR_4->link_m, &VAR_4->link_n,
      VAR_5);
}
