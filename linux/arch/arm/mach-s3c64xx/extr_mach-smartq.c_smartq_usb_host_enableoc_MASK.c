
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_hcd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct s3c2410_hcd_info*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,int,char*,struct s3c2410_hcd_info*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct s3c2410_hcd_info *VAR_3, int VAR_4)
{
 int VAR_5;


 if (FUNC_3())
  return;

 if (VAR_4) {
  VAR_5 = FUNC_5(FUNC_2(FUNC_0(10)),
      VAR_2,
      VAR_1 | VAR_0,
      "USB host overcurrent", VAR_3);
  if (VAR_5 != 0)
   FUNC_4("failed to request usb oc irq: %d\n", VAR_5);
 } else {
  FUNC_1(FUNC_2(FUNC_0(10)), VAR_3);
 }
}
