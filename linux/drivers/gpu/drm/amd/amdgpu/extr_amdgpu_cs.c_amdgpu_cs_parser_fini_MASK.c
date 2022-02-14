
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bo; } ;
struct TYPE_6__ {TYPE_1__ tv; } ;
struct amdgpu_cs_parser {unsigned int num_post_deps; unsigned int nchunks; TYPE_2__ uf_entry; scalar_t__ job; TYPE_3__* chunks; scalar_t__ bo_list; TYPE_4__* ctx; int fence; TYPE_3__* post_deps; int validated; int ticket; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {int kdata; struct TYPE_7__* chain; int syncobj; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct amdgpu_bo**) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 struct amdgpu_bo* FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct amdgpu_cs_parser *VAR_0, int VAR_1,
      bool VAR_2)
{
 unsigned VAR_3;

 if (VAR_1 && VAR_2)
  FUNC_9(&VAR_0->ticket,
        &VAR_0->validated);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_post_deps; VAR_3++) {
  FUNC_5(VAR_0->post_deps[VAR_3].syncobj);
  FUNC_6(VAR_0->post_deps[VAR_3].chain);
 }
 FUNC_6(VAR_0->post_deps);

 FUNC_4(VAR_0->fence);

 if (VAR_0->ctx) {
  FUNC_8(&VAR_0->ctx->lock);
  FUNC_2(VAR_0->ctx);
 }
 if (VAR_0->bo_list)
  FUNC_0(VAR_0->bo_list);

 for (VAR_3 = 0; VAR_3 < VAR_0->nchunks; VAR_3++)
  FUNC_7(VAR_0->chunks[VAR_3].kdata);
 FUNC_6(VAR_0->chunks);
 if (VAR_0->job)
  FUNC_3(VAR_0->job);
 if (VAR_0->uf_entry.tv.bo) {
  struct amdgpu_bo *VAR_4 = FUNC_10(VAR_0->uf_entry.tv.bo);

  FUNC_1(&VAR_4);
 }
}
