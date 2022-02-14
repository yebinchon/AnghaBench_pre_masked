
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync32; int emit32; } ;
struct nv84_fence_chan {TYPE_1__ base; } ;
struct nouveau_channel {struct nv84_fence_chan* fence; } ;


 int FUNC_0 (struct nouveau_channel*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct nouveau_channel *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == 0) {
  struct nv84_fence_chan *VAR_4 = VAR_2->fence;
  VAR_4->base.emit32 = VAR_0;
  VAR_4->base.sync32 = VAR_1;
 }
 return VAR_3;
}
