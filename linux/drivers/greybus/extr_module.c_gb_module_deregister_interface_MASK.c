
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_interface {int disconnected; int removed; int mutex; TYPE_1__* module; } ;
struct TYPE_2__ {scalar_t__ disconnected; } ;


 int FUNC_0 (struct gb_interface*) ;
 int FUNC_1 (struct gb_interface*) ;
 int FUNC_2 (struct gb_interface*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gb_interface *VAR_0)
{

 if (VAR_0->module->disconnected)
  VAR_0->disconnected = 1;

 FUNC_3(&VAR_0->mutex);
 VAR_0->removed = 1;
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_4(&VAR_0->mutex);

 FUNC_1(VAR_0);
}
