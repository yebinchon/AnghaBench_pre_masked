
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {scalar_t__ hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_pportdata*,int) ;
 int FUNC_2 (struct hfi1_pportdata*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct hfi1_pportdata*) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ) ;

int FUNC_6(struct hfi1_pportdata *VAR_3)
{
 struct hfi1_devdata *VAR_4 = VAR_3->dd;
 u64 VAR_5, VAR_6;


 FUNC_1(VAR_3, 0);


 VAR_5 = (u64)VAR_2;

 VAR_6 = FUNC_0(VAR_4,
        VAR_4->hfi1_id ? VAR_1 : VAR_0);
 VAR_6 &= ~VAR_5;
 FUNC_5(VAR_4,
    VAR_4->hfi1_id ? VAR_1 : VAR_0, VAR_6);

 FUNC_3(10);

 VAR_6 |= VAR_5;
 FUNC_5(VAR_4,
    VAR_4->hfi1_id ? VAR_1 : VAR_0, VAR_6);

 FUNC_4(VAR_3);





 FUNC_1(VAR_3, 1);






 return FUNC_2(VAR_3, 0);
}
