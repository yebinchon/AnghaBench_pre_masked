
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_place {int flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct ttm_mem_type_manager {struct amdgpu_gtt_mgr* priv; } ;
struct ttm_mem_reg {scalar_t__ mem_type; scalar_t__ num_pages; int start; struct amdgpu_gtt_node* mm_node; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; } ;
struct TYPE_2__ {scalar_t__ size; int start; } ;
struct amdgpu_gtt_node {TYPE_1__ node; struct ttm_buffer_object* tbo; } ;
struct amdgpu_gtt_mgr {int available; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ttm_mem_type_manager*,struct ttm_buffer_object*,struct ttm_place const*,struct ttm_mem_reg*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (struct amdgpu_gtt_node*) ;
 struct amdgpu_gtt_node* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ttm_mem_type_manager *VAR_5,
         struct ttm_buffer_object *VAR_6,
         const struct ttm_place *VAR_7,
         struct ttm_mem_reg *VAR_8)
{
 struct amdgpu_gtt_mgr *VAR_9 = VAR_5->priv;
 struct amdgpu_gtt_node *VAR_10;
 int VAR_11;

 FUNC_6(&VAR_9->lock);
 if ((&VAR_6->mem == VAR_8 || VAR_6->mem.mem_type != VAR_4) &&
     FUNC_2(&VAR_9->available) < VAR_8->num_pages) {
  FUNC_7(&VAR_9->lock);
  return 0;
 }
 FUNC_3(VAR_8->num_pages, &VAR_9->available);
 FUNC_7(&VAR_9->lock);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto err_out;
 }

 VAR_10->node.start = VAR_0;
 VAR_10->node.size = VAR_8->num_pages;
 VAR_10->tbo = VAR_6;
 VAR_8->mm_node = VAR_10;

 if (VAR_7->fpfn || VAR_7->lpfn || VAR_7->flags & VAR_3) {
  VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
  if (FUNC_8(VAR_11)) {
   FUNC_4(VAR_10);
   VAR_8->mm_node = ((void*)0);
   VAR_11 = 0;
   goto err_out;
  }
 } else {
  VAR_8->start = VAR_10->node.start;
 }

 return 0;
err_out:
 FUNC_1(VAR_8->num_pages, &VAR_9->available);

 return VAR_11;
}
