
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfi1_pportdata {int link_speed_active; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_pportdata*,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hfi1_pportdata *VAR_1, u16 VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_0(VAR_1->link_speed_active);





 for (VAR_3 = 0; VAR_3 < VAR_0 + 1; VAR_3++)
  FUNC_1(VAR_1, VAR_4, VAR_5, VAR_3);
}
