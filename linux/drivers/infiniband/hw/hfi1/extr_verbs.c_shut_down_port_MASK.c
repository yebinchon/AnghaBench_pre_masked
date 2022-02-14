
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rvt_dev_info {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfi1_devdata* FUNC_0 (struct hfi1_ibdev*) ;
 struct hfi1_ibdev* FUNC_1 (struct rvt_dev_info*) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,int ,int ) ;
 int FUNC_3 (struct hfi1_pportdata*,int ) ;

__attribute__((used)) static int FUNC_4(struct rvt_dev_info *VAR_2, u8 VAR_3)
{
 struct hfi1_ibdev *VAR_4 = FUNC_1(VAR_2);
 struct hfi1_devdata *VAR_5 = FUNC_0(VAR_4);
 struct hfi1_pportdata *VAR_6 = &VAR_5->pport[VAR_3 - 1];
 int VAR_7;

 FUNC_2(VAR_6, VAR_1, 0,
        VAR_1);
 VAR_7 = FUNC_3(VAR_6, VAR_0);
 return VAR_7;
}
