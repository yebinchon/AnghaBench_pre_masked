
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scx200_acb_iface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct scx200_acb_iface *VAR_5)
{
 u8 VAR_6;



 FUNC_1(0x70, VAR_2);

 if (FUNC_0(VAR_2) != 0x70) {
  FUNC_2("ACBCTL2 readback failed\n");
  return -VAR_4;
 }

 FUNC_1(FUNC_0(VAR_0) | VAR_1, VAR_0);

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_6) {
  FUNC_2("disabled, but ACBCTL1=0x%02x\n", VAR_6);
  return -VAR_4;
 }

 FUNC_1(FUNC_0(VAR_2) | VAR_3, VAR_2);

 FUNC_1(FUNC_0(VAR_0) | VAR_1, VAR_0);

 VAR_6 = FUNC_0(VAR_0);
 if ((VAR_6 & VAR_1) != VAR_1) {
  FUNC_2("enabled, but NMINTE won't be set, ACBCTL1=0x%02x\n",
    VAR_6);
  return -VAR_4;
 }

 return 0;
}
