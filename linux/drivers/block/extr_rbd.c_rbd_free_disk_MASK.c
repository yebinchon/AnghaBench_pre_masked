
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {TYPE_1__* disk; int tag_set; } ;
struct TYPE_2__ {int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_0)
{
 FUNC_0(VAR_0->disk->queue);
 FUNC_1(&VAR_0->tag_set);
 FUNC_2(VAR_0->disk);
 VAR_0->disk = ((void*)0);
}
