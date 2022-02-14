
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int * mp; } ;
struct wiimod_ops {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(const struct wiimod_ops *VAR_0,
        struct wiimote_data *VAR_1)
{
 if (!VAR_1->mp)
  return;

 FUNC_0(VAR_1->mp);
 VAR_1->mp = ((void*)0);
}
