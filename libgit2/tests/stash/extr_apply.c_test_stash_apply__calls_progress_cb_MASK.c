
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_stash_apply_progress_t ;
struct TYPE_4__ {int * progress_payload; int progress_cb; } ;
typedef TYPE_1__ git_stash_apply_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(void)
{
 git_stash_apply_options VAR_5 = VAR_0;
 git_stash_apply_progress_t VAR_6 = VAR_2;

 VAR_5.progress_cb = VAR_3;
 VAR_5.progress_payload = &VAR_6;

 FUNC_1(FUNC_2(VAR_4, 0, &VAR_5));
 FUNC_0(VAR_6, VAR_1);
}
