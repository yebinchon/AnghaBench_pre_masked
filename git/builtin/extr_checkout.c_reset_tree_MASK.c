
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int head_idx; int update; int skip_unmerged; int reset; int merge; int * dst_index; int * src_index; int verbose_update; int fn; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct checkout_opts {int show_progress; } ;
typedef int opts ;


 int FUNC_0 (struct tree_desc*,int ,int ) ;
 int FUNC_1 (struct unpack_trees_options*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct tree*) ;
 int VAR_1 ;
 int FUNC_3 (int,struct tree_desc*,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_4(struct tree *VAR_2, const struct checkout_opts *VAR_3,
        int VAR_4, int *VAR_5)
{
 struct unpack_trees_options VAR_6;
 struct tree_desc VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.head_idx = -1;
 VAR_6.update = VAR_4;
 VAR_6.skip_unmerged = !VAR_4;
 VAR_6.reset = 1;
 VAR_6.merge = 1;
 VAR_6.fn = VAR_0;
 VAR_6.verbose_update = VAR_3->show_progress;
 VAR_6.src_index = &VAR_1;
 VAR_6.dst_index = &VAR_1;
 FUNC_2(VAR_2);
 FUNC_0(&VAR_7, VAR_2->buffer, VAR_2->size);
 switch (FUNC_3(1, &VAR_7, &VAR_6)) {
 case -2:
  *VAR_5 = 1;







 case 0:
  return 0;
 default:
  return 128;
 }
}
