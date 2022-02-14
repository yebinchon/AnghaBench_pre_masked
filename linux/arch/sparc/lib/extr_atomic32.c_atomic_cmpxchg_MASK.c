
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int counter; } ;
typedef TYPE_1__ atomic_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

int FUNC_4(atomic_t *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 FUNC_2(FUNC_0(VAR_0), VAR_4);
 VAR_3 = VAR_0->counter;
 if (FUNC_1(VAR_3 == VAR_1))
  VAR_0->counter = VAR_2;

 FUNC_3(FUNC_0(VAR_0), VAR_4);
 return VAR_3;
}
