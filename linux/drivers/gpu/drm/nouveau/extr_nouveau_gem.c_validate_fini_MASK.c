
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct validate_op {int ticket; } ;
struct nouveau_fence {int dummy; } ;
struct nouveau_channel {int dummy; } ;
struct drm_nouveau_gem_pushbuf_bo {int dummy; } ;


 int FUNC_0 (struct validate_op*,struct nouveau_channel*,struct nouveau_fence*,struct drm_nouveau_gem_pushbuf_bo*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct validate_op *VAR_0, struct nouveau_channel *VAR_1,
       struct nouveau_fence *VAR_2,
       struct drm_nouveau_gem_pushbuf_bo *VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->ticket);
}
