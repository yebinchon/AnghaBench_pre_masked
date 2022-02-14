
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int counter; } ;
typedef TYPE_1__ atomic_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

int FUNC_3(atomic_t *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 FUNC_1(FUNC_0(VAR_0), VAR_4);
 VAR_3 = VAR_0->counter;
 if (VAR_3 != VAR_2)
  VAR_0->counter += VAR_1;
 FUNC_2(FUNC_0(VAR_0), VAR_4);
 return VAR_3;
}
