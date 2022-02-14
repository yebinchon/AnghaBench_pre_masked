
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_buf ;
struct TYPE_3__ {int target_path; int target_len; } ;
typedef TYPE_1__ checkout_data ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(
 git_buf **VAR_0, checkout_data *VAR_1, const char *VAR_2)
{
 FUNC_1(&VAR_1->target_path, VAR_1->target_len);

 if (VAR_2 && FUNC_0(&VAR_1->target_path, VAR_2) < 0)
  return -1;

 *VAR_0 = &VAR_1->target_path;

 return 0;
}
