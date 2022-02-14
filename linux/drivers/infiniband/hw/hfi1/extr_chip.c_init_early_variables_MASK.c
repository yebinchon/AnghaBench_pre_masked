
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int dummy; } ;
struct hfi1_devdata {int link_credits; int vl15_init; int num_pports; struct hfi1_pportdata* pport; int vau; int vcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct hfi1_devdata*) ;
 scalar_t__ FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (struct hfi1_pportdata*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hfi1_devdata*) ;

__attribute__((used)) static void FUNC_7(struct hfi1_devdata *VAR_4)
{
 int VAR_5;


 VAR_4->vau = VAR_1;
 VAR_4->link_credits = VAR_0;
 if (FUNC_3(VAR_4))
  VAR_4->link_credits--;
 VAR_4->vcu = FUNC_1(VAR_3);

 VAR_4->vl15_init = (8 * (2048 + 128)) / FUNC_5(VAR_4->vau);
 if (VAR_4->vl15_init > VAR_4->link_credits)
  VAR_4->vl15_init = VAR_4->link_credits;

 FUNC_6(VAR_4);

 if (FUNC_0(VAR_2))
  for (VAR_5 = 0; VAR_5 < VAR_4->num_pports; VAR_5++) {
   struct hfi1_pportdata *VAR_6 = &VAR_4->pport[VAR_5];

   FUNC_4(VAR_6);
  }
 FUNC_2(VAR_4);
}
