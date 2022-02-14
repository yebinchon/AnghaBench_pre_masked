
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_fence_chan {int notify_ref; } ;
struct TYPE_3__ {int flags; } ;
struct nouveau_fence {TYPE_1__ base; int channel; int head; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 struct nouveau_fence_chan* FUNC_3 (struct nouveau_fence*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_fence *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(&VAR_1->base);
 FUNC_2(&VAR_1->head);
 FUNC_4(VAR_1->channel, ((void*)0));

 if (FUNC_5(VAR_0, &VAR_1->base.flags)) {
  struct nouveau_fence_chan *VAR_3 = FUNC_3(VAR_1);

  if (!--VAR_3->notify_ref)
   VAR_2 = 1;
 }

 FUNC_0(&VAR_1->base);
 return VAR_2;
}
