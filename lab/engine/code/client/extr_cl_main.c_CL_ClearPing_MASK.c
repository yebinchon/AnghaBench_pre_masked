
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ port; } ;
struct TYPE_4__ {TYPE_1__ adr; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0( int VAR_2 )
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return;

 VAR_1[VAR_2].adr.port = 0;
}
