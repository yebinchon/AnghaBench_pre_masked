
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long mem; long agp; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void)
{
 long VAR_2, VAR_3, VAR_4;


 VAR_2 = FUNC_0() >> (20 - VAR_0);



 VAR_3 = 1;

 while ((VAR_2 > VAR_1[VAR_3].mem) && (VAR_3 < 8))
  VAR_3++;

 VAR_4 = VAR_1[VAR_3 - 1].agp +
    ( (VAR_2 - VAR_1[VAR_3 - 1].mem) *
      (VAR_1[VAR_3].agp - VAR_1[VAR_3 - 1].agp)) /
    (VAR_1[VAR_3].mem - VAR_1[VAR_3 - 1].mem);

 VAR_4 = VAR_4 << (20 - VAR_0);
 return VAR_4;
}
