
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_1 (struct hfi1_pportdata*,int ,int,void*,int) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int ) ;

int FUNC_4(struct hfi1_pportdata *VAR_1, u32 VAR_2, int VAR_3, void *VAR_4,
    int VAR_5)
{
 struct hfi1_devdata *VAR_6 = VAR_1->dd;
 u32 VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_0);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_6, VAR_7);

 return VAR_8;
}
