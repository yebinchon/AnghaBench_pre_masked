
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int line; int match_line; TYPE_2__* driver; } ;
typedef TYPE_1__ git_diff_find_context_payload ;
typedef int * git_diff_find_context_fn ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ git_diff_driver ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(
 git_diff_find_context_fn *VAR_4,
 git_diff_find_context_payload *VAR_5,
 git_diff_driver *VAR_6)
{
 *VAR_4 = VAR_6 ? VAR_1 : ((void*)0);

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 if (VAR_6) {
  VAR_5->driver = VAR_6;
  VAR_5->match_line = (VAR_6->type == VAR_0) ?
   VAR_2 : VAR_3;
  FUNC_0(&VAR_5->line, 0);
 }
}
