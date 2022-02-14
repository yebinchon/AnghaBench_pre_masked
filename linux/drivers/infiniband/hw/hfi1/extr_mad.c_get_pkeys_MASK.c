
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hfi1_pportdata {int pkeys; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_0, u8 VAR_1, u16 *VAR_2)
{
 struct hfi1_pportdata *VAR_3 = VAR_0->pport + VAR_1 - 1;

 FUNC_0(VAR_2, VAR_3->pkeys, sizeof(VAR_3->pkeys));

 return 0;
}
