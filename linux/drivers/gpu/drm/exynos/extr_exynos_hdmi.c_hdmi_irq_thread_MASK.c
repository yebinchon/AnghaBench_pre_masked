
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int hotplug_work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct hdmi_context *VAR_5 = VAR_4;

 FUNC_0(VAR_2, &VAR_5->hotplug_work,
   FUNC_1(VAR_0));

 return VAR_1;
}
