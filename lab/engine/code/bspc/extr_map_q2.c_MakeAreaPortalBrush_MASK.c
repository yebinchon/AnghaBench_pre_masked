
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int surf; void* contents; scalar_t__ texinfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_5__ {int numsides; TYPE_1__* original_sides; void* contents; } ;
typedef TYPE_2__ mapbrush_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(mapbrush_t *VAR_3)
{
 int VAR_4;
 side_t *VAR_5;

 VAR_3->contents = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->numsides; VAR_4++)
 {
  VAR_5 = VAR_3->original_sides + VAR_4;

  VAR_5->surf &= ~(VAR_1|VAR_2);

  VAR_5->texinfo = 0;
  VAR_5->contents = VAR_0;
 }
}
