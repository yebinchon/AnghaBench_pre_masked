
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int alignment; } ;
typedef TYPE_1__ rh_info_t ;
struct TYPE_10__ {unsigned long start; int size; int * owner; } ;
typedef TYPE_2__ rh_block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;

int FUNC_4(rh_info_t * VAR_1, unsigned long VAR_2, int VAR_3)
{
 rh_block_t *VAR_4;
 unsigned long VAR_5, VAR_6, VAR_7;
 int VAR_8;


 VAR_5 = VAR_2;
 VAR_6 = VAR_5 + VAR_3;
 VAR_7 = VAR_1->alignment - 1;


 VAR_5 = (VAR_5 + VAR_7) & ~VAR_7;


 VAR_6 = VAR_6 & ~VAR_7;

 if (FUNC_0(VAR_6) || (VAR_6 < VAR_5))
  return -VAR_0;


 VAR_2 = VAR_5;
 VAR_3 = VAR_6 - VAR_5;


 VAR_8 = FUNC_1(VAR_1, 1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4 = FUNC_3(VAR_1);
 VAR_4->start = VAR_2;
 VAR_4->size = VAR_3;
 VAR_4->owner = ((void*)0);

 FUNC_2(VAR_1, VAR_4);

 return 0;
}
