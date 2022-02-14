
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {int port_type; int dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int) ;

void FUNC_1(struct hfi1_pportdata *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3->dd, VAR_0, 0,
     VAR_1, &VAR_5,
     4);
 if (VAR_4) {
  VAR_3->port_type = VAR_2;
  return;
 }
 VAR_3->port_type = VAR_5;
}
