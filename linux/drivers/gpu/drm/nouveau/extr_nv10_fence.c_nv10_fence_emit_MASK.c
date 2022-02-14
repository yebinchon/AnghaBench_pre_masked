
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seqno; } ;
struct nouveau_fence {TYPE_1__ base; struct nouveau_channel* channel; } ;
struct nouveau_channel {int dummy; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_0 ;
 int FUNC_2 (struct nouveau_channel*,int ) ;
 int FUNC_3 (struct nouveau_channel*,int) ;

int
FUNC_4(struct nouveau_fence *VAR_1)
{
 struct nouveau_channel *VAR_2 = VAR_1->channel;
 int VAR_3 = FUNC_3(VAR_2, 2);
 if (VAR_3 == 0) {
  FUNC_0(VAR_2, 0, VAR_0, 1);
  FUNC_2 (VAR_2, VAR_1->base.seqno);
  FUNC_1 (VAR_2);
 }
 return VAR_3;
}
