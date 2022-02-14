
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_context {TYPE_1__* drv_data; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hdmi_context*,int) ;
 int FUNC_1 (struct hdmi_context*) ;
 int FUNC_2 (struct hdmi_context*) ;

__attribute__((used)) static void FUNC_3(struct hdmi_context *VAR_1)
{
 if (VAR_1->drv_data->type == VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);

 FUNC_0(VAR_1, 1);
}
