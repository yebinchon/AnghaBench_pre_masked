
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * repo; void* cb_data; scalar_t__ cb; } ;
typedef TYPE_1__ tag_cb_data ;
typedef scalar_t__ git_tag_foreach_cb ;
typedef int git_repository ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int VAR_0 ;

int FUNC_2(git_repository *VAR_1, git_tag_foreach_cb VAR_2, void *VAR_3)
{
 tag_cb_data VAR_4;

 FUNC_0(VAR_1 && VAR_2);

 VAR_4.cb = VAR_2;
 VAR_4.cb_data = VAR_3;
 VAR_4.repo = VAR_1;

 return FUNC_1(VAR_1, &VAR_0, &VAR_4);
}
