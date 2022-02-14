
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hv_vp_assist_page {int apic_assist; } ;


 int VAR_0 ;
 struct hv_vp_assist_page** VAR_1 ;
 size_t FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2, u32 VAR_3)
{
 struct hv_vp_assist_page *VAR_4 = VAR_1[FUNC_0()];

 if (VAR_4 && (FUNC_2(&VAR_4->apic_assist, 0) & 0x1))
  return;

 FUNC_1(VAR_0, VAR_3, 0);
}
