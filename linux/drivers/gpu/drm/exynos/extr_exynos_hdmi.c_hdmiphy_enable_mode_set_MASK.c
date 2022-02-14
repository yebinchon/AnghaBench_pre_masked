
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_context {scalar_t__ regs_hdmiphy; int * drv_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hdmi_context *VAR_4, bool VAR_5)
{
 u8 VAR_6 = VAR_5 ? VAR_2 : VAR_1;

 if (VAR_4->drv_data == &VAR_3)
  FUNC_0(VAR_6, VAR_4->regs_hdmiphy + VAR_0);
}
