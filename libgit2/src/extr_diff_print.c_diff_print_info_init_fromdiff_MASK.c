
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_diff_line_cb ;
typedef int git_diff_format_t ;
struct TYPE_8__ {int new_prefix; int old_prefix; int id_abbrev; int flags; } ;
struct TYPE_9__ {int strcomp; TYPE_1__ opts; int * repo; } ;
typedef TYPE_2__ git_diff ;
typedef int git_buf ;
struct TYPE_10__ {int strcomp; int new_prefix; int old_prefix; int id_strlen; int flags; } ;
typedef TYPE_3__ diff_print_info ;


 int FUNC_0 (TYPE_3__*,int *,int *,int ,int ,void*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_2(
 diff_print_info *VAR_0,
 git_buf *VAR_1,
 git_diff *VAR_2,
 git_diff_format_t VAR_3,
 git_diff_line_cb VAR_4,
 void *VAR_5)
{
 git_repository *VAR_6 = VAR_2 ? VAR_2->repo : ((void*)0);

 FUNC_1(VAR_0, 0, sizeof(diff_print_info));

 if (VAR_2) {
  VAR_0->flags = VAR_2->opts.flags;
  VAR_0->id_strlen = VAR_2->opts.id_abbrev;
  VAR_0->old_prefix = VAR_2->opts.old_prefix;
  VAR_0->new_prefix = VAR_2->opts.new_prefix;

  VAR_0->strcomp = VAR_2->strcomp;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
}
