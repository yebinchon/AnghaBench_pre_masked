
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_status_t ;
struct TYPE_3__ {int idx2wd; } ;
typedef TYPE_1__ git_status_list ;
typedef int git_diff_delta ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static git_status_t FUNC_2(
 git_status_list *VAR_1,
 git_diff_delta *VAR_2,
 git_diff_delta *VAR_3)
{
 git_status_t VAR_4 = VAR_0;

 if (VAR_2)
  VAR_4 |= FUNC_0(VAR_2);

 if (VAR_3)
  VAR_4 |= FUNC_1(VAR_1->idx2wd, VAR_3);

 return VAR_4;
}
