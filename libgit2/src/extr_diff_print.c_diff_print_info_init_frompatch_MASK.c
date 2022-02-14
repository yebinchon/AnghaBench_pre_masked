
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int new_prefix; int old_prefix; int id_abbrev; int flags; } ;
struct TYPE_10__ {int repo; TYPE_1__ diff_opts; } ;
typedef TYPE_2__ git_patch ;
typedef int git_diff_line_cb ;
typedef int git_diff_format_t ;
typedef int git_buf ;
struct TYPE_11__ {int new_prefix; int old_prefix; int id_strlen; int flags; } ;
typedef TYPE_3__ diff_print_info ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ,int ,void*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_3(
 diff_print_info *VAR_0,
 git_buf *VAR_1,
 git_patch *VAR_2,
 git_diff_format_t VAR_3,
 git_diff_line_cb VAR_4,
 void *VAR_5)
{
 FUNC_0(VAR_2);

 FUNC_2(VAR_0, 0, sizeof(diff_print_info));

 VAR_0->flags = VAR_2->diff_opts.flags;
 VAR_0->id_strlen = VAR_2->diff_opts.id_abbrev;
 VAR_0->old_prefix = VAR_2->diff_opts.old_prefix;
 VAR_0->new_prefix = VAR_2->diff_opts.new_prefix;

 return FUNC_1(VAR_0, VAR_1, VAR_2->repo, VAR_3, VAR_4, VAR_5);
}
