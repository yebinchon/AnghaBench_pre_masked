
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_device {TYPE_1__* disk; int tag_set; } ;
struct TYPE_2__ {int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct nbd_device *VAR_1)
{
 FUNC_0(VAR_1->disk->queue);
 FUNC_1(&VAR_1->tag_set, VAR_0, ((void*)0));
 FUNC_2(VAR_1->disk->queue);
 FUNC_3(FUNC_4(VAR_1->disk), "queue cleared\n");
}
