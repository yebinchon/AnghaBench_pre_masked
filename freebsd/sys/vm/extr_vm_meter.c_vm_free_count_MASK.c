
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ vmd_free_count; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

u_int
FUNC_0(void)
{
 u_int VAR_2;
 int VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += VAR_0[VAR_3].vmd_free_count;

 return (VAR_2);
}
