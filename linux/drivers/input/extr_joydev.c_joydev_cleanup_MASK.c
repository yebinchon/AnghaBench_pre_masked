
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int dummy; } ;
struct joydev {scalar_t__ open; struct input_handle handle; } ;


 int FUNC_0 (struct input_handle*) ;
 int FUNC_1 (struct joydev*) ;
 int FUNC_2 (struct joydev*) ;

__attribute__((used)) static void FUNC_3(struct joydev *VAR_0)
{
 struct input_handle *VAR_1 = &VAR_0->handle;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);


 if (VAR_0->open)
  FUNC_0(VAR_1);
}
