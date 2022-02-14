
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* filename; int filename_len; } ;
typedef TYPE_1__ remove_data ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_1, const char *VAR_2)
{
 int VAR_3;
 remove_data VAR_4;
 git_buf VAR_5 = VAR_0;

 if (FUNC_2(VAR_1) == 0)
  return -1;

 if (FUNC_1(&VAR_5, VAR_1) < 0)
  return -1;

 VAR_4.filename = VAR_2;
 VAR_4.filename_len = FUNC_4(VAR_2);

 VAR_3 = FUNC_3(&VAR_4, &VAR_5);

 FUNC_0(&VAR_5);

 return VAR_3;
}
