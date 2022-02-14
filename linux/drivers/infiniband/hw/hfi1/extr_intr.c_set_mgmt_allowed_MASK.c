
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {scalar_t__ neighbor_type; int mgmt_allowed; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct hfi1_pportdata *VAR_5)
{
 u32 VAR_6;
 struct hfi1_devdata *VAR_7 = VAR_5->dd;

 if (VAR_5->neighbor_type == VAR_3) {
  VAR_5->mgmt_allowed = 1;
 } else {
  FUNC_0(VAR_7, VAR_4, VAR_0, &VAR_6);
  VAR_5->mgmt_allowed = (VAR_6 >> VAR_2)
  & VAR_1;
 }
}
