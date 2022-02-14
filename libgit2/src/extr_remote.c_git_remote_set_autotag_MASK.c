
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_remote_autotag_option_t ;
typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int **,int *) ;

int FUNC_8(git_repository *VAR_4, const char *VAR_5, git_remote_autotag_option_t VAR_6)
{
 git_buf VAR_7 = VAR_1;
 git_config *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4 && VAR_5);

 if ((VAR_9 = FUNC_1(VAR_5)) < 0)
  return VAR_9;

 if ((VAR_9 = FUNC_7(&VAR_8, VAR_4)) < 0)
  return VAR_9;

 if ((VAR_9 = FUNC_3(&VAR_7, VAR_0, VAR_5)))
  return VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_9 = FUNC_5(VAR_8, VAR_7.ptr, "--no-tags");
  break;
 case 130:
  VAR_9 = FUNC_5(VAR_8, VAR_7.ptr, "--tags");
  break;
 case 129:
  VAR_9 = FUNC_4(VAR_8, VAR_7.ptr);
  if (VAR_9 == VAR_2)
   VAR_9 = 0;
  break;
 default:
  FUNC_6(VAR_3, "invalid value for the tagopt setting");
  VAR_9 = -1;
 }

 FUNC_2(&VAR_7);
 return VAR_9;
}
