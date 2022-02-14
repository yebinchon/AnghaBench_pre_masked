
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {int host_link_state; int dd; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;

u32 FUNC_1(struct hfi1_pportdata *VAR_6)
{
 if (VAR_6->host_link_state && (VAR_6->host_link_state & VAR_0))
  return VAR_4;

 switch (VAR_6->host_link_state & VAR_1) {
 case 128:
  return VAR_5;
 case 129:
  return VAR_3;
 case 130:
  return VAR_2;
 default:
  FUNC_0(VAR_6->dd, "invalid host_link_state 0x%x\n",
      VAR_6->host_link_state);
 return -1;
 }
}
