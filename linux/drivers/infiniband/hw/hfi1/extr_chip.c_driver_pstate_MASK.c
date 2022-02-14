
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
 int FUNC_0 (int ,char*,int) ;

u32 FUNC_1(struct hfi1_pportdata *VAR_5)
{
 switch (VAR_5->host_link_state) {
 case 129:
 case 130:
 case 131:
  return VAR_1;
 case 135:
  return VAR_2;
 case 138:
  return VAR_0;
 case 136:
  return VAR_4;
 case 128:
  return VAR_3;
 case 133:
  return VAR_3;
 case 134:
  return VAR_4;
 case 132:
  return VAR_4;
 case 137:
 default:
  FUNC_0(VAR_5->dd, "invalid host_link_state 0x%x\n",
      VAR_5->host_link_state);
  return -1;
 }
}
