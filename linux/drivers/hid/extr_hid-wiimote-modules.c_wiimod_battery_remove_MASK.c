
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;
struct wiimote_data {TYPE_1__ battery_desc; int battery; } ;
struct wiimod_ops {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct wiimod_ops *VAR_0,
      struct wiimote_data *VAR_1)
{
 if (!VAR_1->battery_desc.name)
  return;

 FUNC_1(VAR_1->battery);
 FUNC_0(VAR_1->battery_desc.name);
 VAR_1->battery_desc.name = ((void*)0);
}
