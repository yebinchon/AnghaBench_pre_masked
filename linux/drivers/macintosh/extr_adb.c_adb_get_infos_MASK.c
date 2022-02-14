
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int original_address; int handler_id; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(int VAR_2, int *VAR_3, int *VAR_4)
{
 FUNC_0(&VAR_1);
 *VAR_3 = VAR_0[VAR_2].original_address;
 *VAR_4 = VAR_0[VAR_2].handler_id;
 FUNC_1(&VAR_1);

 return (*VAR_3 != 0);
}
