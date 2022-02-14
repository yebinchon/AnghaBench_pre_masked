
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int * absbit; TYPE_1__* absinfo; } ;
struct TYPE_2__ {scalar_t__ fuzz; } ;


 int FUNC_0 (unsigned int) ;
 size_t FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 if (VAR_0->absinfo && FUNC_2(VAR_2, VAR_0->absbit)) {
  VAR_0->absinfo[VAR_1] = VAR_0->absinfo[VAR_2];
  VAR_0->absinfo[VAR_1].fuzz = 0;
  VAR_0->absbit[FUNC_1(VAR_1)] |= FUNC_0(VAR_1);
 }
}
