
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_devdata {scalar_t__ hfi1_id; struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct hfi1_pportdata*) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ,int) ;
 int FUNC_2 (struct hfi1_pportdata*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int ) ;

void FUNC_4(struct hfi1_devdata *VAR_10)
{
 struct hfi1_pportdata *VAR_11 = VAR_10->pport;
 u64 VAR_12;

 VAR_12 = (u64)(VAR_8 | VAR_9);

 FUNC_3(VAR_10, VAR_10->hfi1_id ? VAR_3 : VAR_0,
    VAR_12);
 FUNC_3(VAR_10, VAR_10->hfi1_id ? VAR_5 : VAR_2,
    VAR_12);

 FUNC_2(VAR_11, 0);


 if (FUNC_0(VAR_11))
  VAR_12 &= ~(u64)VAR_9;
 FUNC_3(VAR_10,
    VAR_10->hfi1_id ? VAR_4 : VAR_1,
    VAR_12);


 if (!VAR_10->hfi1_id)
  FUNC_1(VAR_10, VAR_6, VAR_6, 1);
 else
  FUNC_1(VAR_10, VAR_7, VAR_7, 1);
}
