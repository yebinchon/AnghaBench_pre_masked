
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {scalar_t__ hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;

int FUNC_1(struct hfi1_pportdata *VAR_3)
{
 struct hfi1_devdata *VAR_4 = VAR_3->dd;
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_4->hfi1_id ? VAR_1 : VAR_0);
 return !(VAR_5 & VAR_2);
}
