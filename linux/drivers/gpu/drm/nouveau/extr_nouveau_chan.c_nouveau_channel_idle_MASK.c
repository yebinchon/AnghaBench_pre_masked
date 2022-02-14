
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_fence {int dummy; } ;
struct nouveau_cli {int base; } ;
struct TYPE_3__ {scalar_t__ client; } ;
struct nouveau_channel {int chid; TYPE_1__ user; int killed; scalar_t__ fence; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ,struct nouveau_cli*,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nouveau_channel*,int,struct nouveau_fence**) ;
 int FUNC_4 (struct nouveau_fence**) ;
 int FUNC_5 (struct nouveau_fence*,int,int) ;
 TYPE_2__* FUNC_6 (int *) ;

int
FUNC_7(struct nouveau_channel *VAR_1)
{
 if (FUNC_2(VAR_1 && VAR_1->fence && !FUNC_1(&VAR_1->killed))) {
  struct nouveau_cli *VAR_2 = (void *)VAR_1->user.client;
  struct nouveau_fence *VAR_3 = ((void*)0);
  int VAR_4;

  VAR_4 = FUNC_3(VAR_1, 0, &VAR_3);
  if (!VAR_4) {
   VAR_4 = FUNC_5(VAR_3, 0, 0);
   FUNC_4(&VAR_3);
  }

  if (VAR_4) {
   FUNC_0(VAR_0, VAR_2, "failed to idle channel %d [%s]\n",
      VAR_1->chid, FUNC_6(&VAR_2->base)->name);
   return VAR_4;
  }
 }
 return 0;
}
