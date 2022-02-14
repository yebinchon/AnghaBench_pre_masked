
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct hfi1_devdata*,char*,int) ;

__attribute__((used)) static u32 FUNC_1(struct hfi1_devdata *VAR_4, u32 VAR_5)
{
 switch (VAR_5) {
 default:
  FUNC_0(VAR_4,
      "Unknown logical state 0x%x, reporting IB_PORT_DOWN\n",
      VAR_5);

 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 case 130:
  return VAR_1;
 case 131:
  return VAR_0;
 }
}
