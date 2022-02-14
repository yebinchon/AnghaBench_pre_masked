
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_context {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct hdmi_context*,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct hdmi_context *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 10; ++VAR_3) {
  u32 VAR_4 = FUNC_2(VAR_2, VAR_0);

  if (VAR_4 & VAR_1) {
   FUNC_0(VAR_2->dev,
       "PLL stabilized after %d tries\n",
       VAR_3);
   return;
  }
  FUNC_3(10, 20);
 }

 FUNC_1(VAR_2->dev, "PLL could not reach steady state\n");
}
