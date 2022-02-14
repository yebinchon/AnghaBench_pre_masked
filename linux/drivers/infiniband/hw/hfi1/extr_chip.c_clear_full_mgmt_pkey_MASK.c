
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {scalar_t__* pkeys; int port; int dd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hfi1_pportdata*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hfi1_pportdata *VAR_1)
{
 if (VAR_1->pkeys[2] != 0) {
  VAR_1->pkeys[2] = 0;
  (void)FUNC_1(VAR_1, VAR_0, 0);
  FUNC_0(VAR_1->dd, VAR_1->port);
 }
}
