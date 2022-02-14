
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hfi1_pportdata {int port; int lmc; int lid; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ,int ) ;
 int FUNC_1 (struct hfi1_pportdata*,int ,int ) ;

int FUNC_2(struct hfi1_pportdata *VAR_1, u32 VAR_2, u8 VAR_3)
{
 struct hfi1_devdata *VAR_4 = VAR_1->dd;

 VAR_1->lid = VAR_2;
 VAR_1->lmc = VAR_3;
 FUNC_1(VAR_1, VAR_0, 0);

 FUNC_0(VAR_4, "port %u: got a lid: 0x%x\n", VAR_1->port, VAR_2);

 return 0;
}
