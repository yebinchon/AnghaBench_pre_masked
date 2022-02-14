
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int dummy; } ;
struct evdev {scalar_t__ open; struct input_handle handle; } ;


 int FUNC_0 (struct evdev*) ;
 int FUNC_1 (struct evdev*) ;
 int FUNC_2 (struct input_handle*) ;
 int FUNC_3 (struct input_handle*,int *) ;

__attribute__((used)) static void FUNC_4(struct evdev *VAR_0)
{
 struct input_handle *VAR_1 = &VAR_0->handle;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);


 if (VAR_0->open) {
  FUNC_3(VAR_1, ((void*)0));
  FUNC_2(VAR_1);
 }
}
