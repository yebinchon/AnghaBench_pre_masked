
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr_segments; TYPE_1__* segment; } ;
struct TYPE_4__ {int memsz; int mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,int ) ;

void FUNC_3(void)
{
 int VAR_2;

 FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_segments; VAR_2++)
  FUNC_2(
   FUNC_0(VAR_1->segment[VAR_2].mem),
   VAR_1->segment[VAR_2].memsz >> VAR_0, 0);
}
