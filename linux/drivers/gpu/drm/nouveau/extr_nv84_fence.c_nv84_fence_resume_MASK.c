
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv84_fence_priv {int * suspend; int bo; } ;
struct TYPE_2__ {int nr; } ;
struct nouveau_drm {TYPE_1__ chan; struct nv84_fence_priv* fence; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_drm *VAR_0)
{
 struct nv84_fence_priv *VAR_1 = VAR_0->fence;
 int VAR_2;

 if (VAR_1->suspend) {
  for (VAR_2 = 0; VAR_2 < VAR_0->chan.nr; VAR_2++)
   FUNC_0(VAR_1->bo, VAR_2*4, VAR_1->suspend[VAR_2]);
  FUNC_1(VAR_1->suspend);
  VAR_1->suspend = ((void*)0);
 }
}
