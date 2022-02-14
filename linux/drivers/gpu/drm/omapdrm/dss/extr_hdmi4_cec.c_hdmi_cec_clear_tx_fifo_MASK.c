
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_core_data {int base; } ;
struct cec_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int,int) ;
 struct hdmi_core_data* FUNC_2 (struct cec_adapter*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct cec_adapter *VAR_2)
{
 struct hdmi_core_data *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = VAR_1;
 int VAR_5;

 FUNC_1(VAR_3->base, VAR_0, 0x1, 7, 7);
 while (VAR_4) {
  VAR_5 = FUNC_3(VAR_3->base, VAR_0);
  if (FUNC_0(VAR_5, 7, 7) == 0)
   break;
  VAR_4--;
 }
 return VAR_4 != 0;
}
