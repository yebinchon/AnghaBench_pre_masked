
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tree_desc {int dummy; } ;
struct tree {int dummy; } ;
struct merge_options {TYPE_2__* priv; TYPE_1__* repo; } ;
struct index_state {int cache_tree; int * member_0; } ;
struct TYPE_8__ {int index_only; int update; int merge; int head_idx; int aggressive; struct index_state* src_index; struct index_state* dst_index; int fn; } ;
struct TYPE_7__ {struct index_state orig_index; TYPE_3__ unpack_opts; scalar_t__ call_depth; } ;
struct TYPE_6__ {struct index_state* index; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tree_desc*,struct tree*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (struct merge_options*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int VAR_0 ;
 int FUNC_5 (int,struct tree_desc*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct merge_options *VAR_1,
         struct tree *VAR_2,
         struct tree *VAR_3,
         struct tree *VAR_4)
{
 int VAR_5;
 struct tree_desc VAR_6[3];
 struct index_state VAR_7 = { ((void*)0) };

 FUNC_2(&VAR_1->priv->unpack_opts, 0, sizeof(VAR_1->priv->unpack_opts));
 if (VAR_1->priv->call_depth)
  VAR_1->priv->unpack_opts.index_only = 1;
 else
  VAR_1->priv->unpack_opts.update = 1;
 VAR_1->priv->unpack_opts.merge = 1;
 VAR_1->priv->unpack_opts.head_idx = 2;
 VAR_1->priv->unpack_opts.fn = VAR_0;
 VAR_1->priv->unpack_opts.src_index = VAR_1->repo->index;
 VAR_1->priv->unpack_opts.dst_index = &VAR_7;
 VAR_1->priv->unpack_opts.aggressive = !FUNC_3(VAR_1);
 FUNC_4(&VAR_1->priv->unpack_opts, "merge");

 FUNC_1(VAR_6+0, VAR_2);
 FUNC_1(VAR_6+1, VAR_3);
 FUNC_1(VAR_6+2, VAR_4);

 VAR_5 = FUNC_5(3, VAR_6, &VAR_1->priv->unpack_opts);
 FUNC_0(&VAR_1->repo->index->cache_tree);







 VAR_1->priv->orig_index = *VAR_1->repo->index;
 *VAR_1->repo->index = VAR_7;
 VAR_1->priv->unpack_opts.src_index = &VAR_1->priv->orig_index;

 return VAR_5;
}
