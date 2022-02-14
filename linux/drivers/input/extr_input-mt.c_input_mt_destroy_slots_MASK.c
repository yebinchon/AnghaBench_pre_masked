
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {TYPE_1__* mt; } ;
struct TYPE_2__ {struct TYPE_2__* red; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct input_dev *VAR_0)
{
 if (VAR_0->mt) {
  FUNC_0(VAR_0->mt->red);
  FUNC_0(VAR_0->mt);
 }
 VAR_0->mt = ((void*)0);
}
