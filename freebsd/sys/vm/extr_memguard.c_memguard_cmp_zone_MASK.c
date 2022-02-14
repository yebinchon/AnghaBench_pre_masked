
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_3__ {int uz_flags; int uz_name; int uz_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;

int
FUNC_2(uma_zone_t VAR_4)
{

 if ((VAR_2 & VAR_0) == 0 &&
     VAR_4->uz_flags & VAR_1)
  return (0);

 if (FUNC_0(VAR_4->uz_size))
  return (1);





 return (FUNC_1(VAR_4->uz_name, VAR_3) == 0);
}
