
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cec_adapter {int name; } ;
typedef int ktime_t ;





 int VAR_0 ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (struct cec_adapter*,int,int,int,int,int,int ) ;

void FUNC_2(struct cec_adapter *VAR_1,
      u8 VAR_2, ktime_t VAR_3)
{
 switch (VAR_2 & ~VAR_0) {
 case 128:
  FUNC_1(VAR_1, VAR_2, 0, 0, 0, 0, VAR_3);
  return;
 case 132:
  FUNC_1(VAR_1, VAR_2, 1, 0, 0, 0, VAR_3);
  return;
 case 129:
  FUNC_1(VAR_1, VAR_2, 0, 1, 0, 0, VAR_3);
  return;
 case 130:
  FUNC_1(VAR_1, VAR_2, 0, 0, 1, 0, VAR_3);
  return;
 case 131:
  FUNC_1(VAR_1, VAR_2, 0, 0, 0, 1, VAR_3);
  return;
 default:

  FUNC_0(1, "cec-%s: invalid status 0x%02x\n", VAR_1->name, VAR_2);
  return;
 }
}
