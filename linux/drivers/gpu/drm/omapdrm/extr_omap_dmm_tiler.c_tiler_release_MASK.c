
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tcm; } ;
struct tiler_block {int alloc_node; TYPE_1__ area; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tiler_block*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(struct tiler_block *VAR_2)
{
 int VAR_3 = FUNC_5(&VAR_2->area);
 unsigned long VAR_4;

 if (VAR_2->area.tcm)
  FUNC_0(VAR_1->dev, "failed to release block\n");

 FUNC_3(&VAR_0, VAR_4);
 FUNC_2(&VAR_2->alloc_node);
 FUNC_4(&VAR_0, VAR_4);

 FUNC_1(VAR_2);
 return VAR_3;
}
