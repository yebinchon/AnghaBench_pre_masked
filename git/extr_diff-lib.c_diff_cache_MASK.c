
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct unpack_trees_options {int head_idx; int index_only; int diff_index_cached; int merge; TYPE_4__* pathspec; int * dst_index; int src_index; struct rev_info* unpack_data; int fn; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct TYPE_8__ {int recursive; } ;
struct TYPE_5__ {int find_copies_harder; } ;
struct TYPE_7__ {TYPE_4__ pathspec; TYPE_2__* repo; TYPE_1__ flags; } ;
struct rev_info {TYPE_3__ diffopt; } ;
struct object_id {int dummy; } ;
typedef int opts ;
struct TYPE_6__ {int index; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct tree_desc*,int ,int ) ;
 int FUNC_2 (struct unpack_trees_options*,int ,int) ;
 char const* FUNC_3 (struct object_id const*) ;
 int VAR_0 ;
 struct tree* FUNC_4 (struct object_id const*) ;
 int FUNC_5 (int,struct tree_desc*,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_6(struct rev_info *VAR_1,
        const struct object_id *VAR_2,
        const char *VAR_3,
        int VAR_4)
{
 struct tree *VAR_5;
 struct tree_desc VAR_6;
 struct unpack_trees_options VAR_7;

 VAR_5 = FUNC_4(VAR_2);
 if (!VAR_5)
  return FUNC_0("bad tree object %s",
        VAR_3 ? VAR_3 : FUNC_3(VAR_2));
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.head_idx = 1;
 VAR_7.index_only = VAR_4;
 VAR_7.diff_index_cached = (VAR_4 &&
      !VAR_1->diffopt.flags.find_copies_harder);
 VAR_7.merge = 1;
 VAR_7.fn = VAR_0;
 VAR_7.unpack_data = VAR_1;
 VAR_7.src_index = VAR_1->diffopt.repo->index;
 VAR_7.dst_index = ((void*)0);
 VAR_7.pathspec = &VAR_1->diffopt.pathspec;
 VAR_7.pathspec->recursive = 1;

 FUNC_1(&VAR_6, VAR_5->buffer, VAR_5->size);
 return FUNC_5(1, &VAR_6, &VAR_7);
}
