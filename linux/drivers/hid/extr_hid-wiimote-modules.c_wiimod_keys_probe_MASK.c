
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiimote_data {TYPE_1__* input; } ;
struct wiimod_ops {int dummy; } ;
struct TYPE_2__ {int keybit; int evbit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(const struct wiimod_ops *VAR_3,
        struct wiimote_data *VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(VAR_0, VAR_4->input->evbit);
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  FUNC_0(VAR_2[VAR_5], VAR_4->input->keybit);

 return 0;
}
