
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * input; } ;
struct wiimote_data {TYPE_1__ extension; } ;
struct wiimod_ops {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(const struct wiimod_ops *VAR_0,
     struct wiimote_data *VAR_1)
{
 if (!VAR_1->extension.input)
  return;

 FUNC_0(VAR_1->extension.input);
 VAR_1->extension.input = ((void*)0);
}
