
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dev_pm_ops {int * restore; int * thaw; int * poweroff; int * freeze; int * resume; int * suspend; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;
typedef int * pm_callback_t ;
__attribute__((used)) static pm_callback_t FUNC_0(const struct dev_pm_ops *VAR_0, pm_message_t VAR_1)
{
 switch (VAR_1.event) {
 }

 return ((void*)0);
}
