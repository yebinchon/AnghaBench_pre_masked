
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ccu_mult {int min; int max; int mult; } ;



__attribute__((used)) static void FUNC_0(unsigned long VAR_0, unsigned long VAR_1,
          struct _ccu_mult *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1 / VAR_0;
 if (VAR_3 < VAR_2->min)
  VAR_3 = VAR_2->min;

 if (VAR_3 > VAR_2->max)
  VAR_3 = VAR_2->max;

 VAR_2->mult = VAR_3;
}
