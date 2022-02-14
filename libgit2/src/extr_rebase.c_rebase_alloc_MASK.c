
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ rewrite_notes_ref; } ;
typedef TYPE_1__ git_rebase_options ;
struct TYPE_13__ {TYPE_2__* rewrite_notes_ref; } ;
struct TYPE_12__ {TYPE_5__ options; } ;
typedef TYPE_2__ git_rebase ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int,int) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_1__ const*,int) ;

__attribute__((used)) static int FUNC_5(git_rebase **VAR_1, const git_rebase_options *VAR_2)
{
 git_rebase *VAR_3 = FUNC_1(1, sizeof(git_rebase));
 FUNC_0(VAR_3);

 *VAR_1 = ((void*)0);

 if (VAR_2)
  FUNC_4(&VAR_3->options, VAR_2, sizeof(git_rebase_options));
 else
  FUNC_3(&VAR_3->options, VAR_0);

 if (VAR_2 && VAR_2->rewrite_notes_ref) {
  VAR_3->options.rewrite_notes_ref = FUNC_2(VAR_2->rewrite_notes_ref);
  FUNC_0(VAR_3->options.rewrite_notes_ref);
 }

 *VAR_1 = VAR_3;

 return 0;
}
