
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_pportdata {int dd; } ;


 int FUNC_0 (struct hfi1_pportdata*,scalar_t__,char*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct hfi1_pportdata *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;

 FUNC_1(VAR_0->dd, &VAR_1);
 FUNC_2(VAR_0->dd, &VAR_2);






 if (VAR_1 == 0 && VAR_2 == 0)
  return;

 FUNC_0(VAR_0, VAR_1, "transmitted");
 FUNC_0(VAR_0, VAR_2, "received");
}
