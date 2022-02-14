
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int local; int oid; int name; } ;
typedef TYPE_1__ git_remote_head ;
typedef scalar_t__ git_remote_autotag_option_t ;
struct TYPE_8__ {int need_pack; int refs; } ;
typedef TYPE_2__ git_remote ;
typedef int git_refspec ;
typedef int git_odb ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(git_remote *VAR_1, git_remote_head *VAR_2, git_odb *VAR_3, git_refspec *VAR_4, git_remote_autotag_option_t VAR_5)
{
 int VAR_6 = 0;

 if (!FUNC_1(VAR_2->name))
  return 0;

 if (VAR_5 == VAR_0) {




  if (FUNC_2(VAR_4, VAR_2->name))
   VAR_6 = 1;
 }

 if (!VAR_6 && FUNC_3(VAR_1, VAR_2->name))
  VAR_6 = 1;

 if (!VAR_6)
  return 0;


 if (FUNC_0(VAR_3, &VAR_2->oid)) {
  VAR_2->local = 1;
 }
 else
  VAR_1->need_pack = 1;

 return FUNC_4(&VAR_1->refs, VAR_2);
}
