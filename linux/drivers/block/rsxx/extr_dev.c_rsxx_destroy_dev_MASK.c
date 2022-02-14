
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_cardinfo {int major; TYPE_1__* queue; int * gendisk; } ;
struct TYPE_2__ {int * queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct rsxx_cardinfo *VAR_2)
{
 if (!VAR_1)
  return;

 FUNC_1(VAR_2->gendisk);
 VAR_2->gendisk = ((void*)0);

 FUNC_0(VAR_2->queue);
 VAR_2->queue->queuedata = ((void*)0);
 FUNC_2(VAR_2->major, VAR_0);
}
