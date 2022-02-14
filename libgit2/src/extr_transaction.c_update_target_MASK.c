
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int symbolic; int id; } ;
struct TYPE_5__ {scalar_t__ ref_type; int committed; int * message; int * sig; int payload; scalar_t__ remove; int * reflog; TYPE_1__ target; int name; } ;
typedef TYPE_2__ transaction_node ;
typedef int git_reference ;
typedef int git_refdb ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int,int,int *,int *,int *) ;
 int * FUNC_3 (int ,int *,int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(git_refdb *VAR_2, transaction_node *VAR_3)
{
 git_reference *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3->ref_type == VAR_0) {
  VAR_4 = FUNC_3(VAR_3->name, &VAR_3->target.id, ((void*)0));
 } else if (VAR_3->ref_type == VAR_1) {
  VAR_4 = FUNC_4(VAR_3->name, VAR_3->target.symbolic);
 } else {
  FUNC_1();
 }

 FUNC_0(VAR_4);
 VAR_6 = VAR_3->reflog == ((void*)0);

 if (VAR_3->remove) {
  VAR_5 = FUNC_2(VAR_2, VAR_3->payload, 2, 0, VAR_4, ((void*)0), ((void*)0));
 } else if (VAR_3->ref_type == VAR_0) {
  VAR_5 = FUNC_2(VAR_2, VAR_3->payload, 1, VAR_6, VAR_4, VAR_3->sig, VAR_3->message);
 } else if (VAR_3->ref_type == VAR_1) {
  VAR_5 = FUNC_2(VAR_2, VAR_3->payload, 1, VAR_6, VAR_4, VAR_3->sig, VAR_3->message);
 } else {
  FUNC_1();
 }

 FUNC_5(VAR_4);
 VAR_3->committed = 1;

 return VAR_5;
}
