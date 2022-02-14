
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ git_clone_local_t ;
struct TYPE_5__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_3, git_clone_local_t VAR_4)
{
 git_buf VAR_5 = VAR_0;
 const char *VAR_6 = VAR_3;
 bool VAR_7, VAR_8;

 if (VAR_4 == VAR_2)
  return 0;

 if ((VAR_7 = FUNC_2(VAR_3)) != 0) {
  if (FUNC_1(&VAR_5, VAR_3) < 0) {
   VAR_8 = -1;
   goto done;
  }

  VAR_6 = VAR_5.ptr;
 }

 VAR_8 = (!VAR_7 || VAR_4 != VAR_1) &&
  FUNC_3(VAR_6);

done:
 FUNC_0(&VAR_5);
 return VAR_8;
}
