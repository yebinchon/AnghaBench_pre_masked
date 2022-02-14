
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int checkout_options; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ onto_name; TYPE_1__ options; } ;
typedef TYPE_2__ git_rebase ;
typedef int git_commit ;
struct TYPE_9__ {char* ancestor_label; scalar_t__ their_label; scalar_t__ our_label; } ;
typedef TYPE_3__ git_checkout_options ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void FUNC_3(
 git_checkout_options *VAR_1,
 git_rebase *VAR_2,
 git_commit *VAR_3)
{
 FUNC_2(VAR_1, &VAR_2->options.checkout_options, sizeof(git_checkout_options));

 if (!VAR_1->ancestor_label)
  VAR_1->ancestor_label = "ancestor";

 if (VAR_2->type == VAR_0) {
  if (!VAR_1->our_label)
   VAR_1->our_label = VAR_2->onto_name;

  if (!VAR_1->their_label)
   VAR_1->their_label = FUNC_1(VAR_3);
 } else {
  FUNC_0();
 }
}
