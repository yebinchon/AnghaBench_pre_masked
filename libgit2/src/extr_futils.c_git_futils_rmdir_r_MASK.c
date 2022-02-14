
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_buf ;
struct TYPE_5__ {char const* base; int flags; int baselen; } ;
typedef TYPE_1__ futils__rmdir_data ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char const*,char const*,int *) ;
 int FUNC_4 (int *,char const*,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char const*) ;

int FUNC_7(
 const char *VAR_4, const char *VAR_5, uint32_t VAR_6)
{
 int VAR_7;
 git_buf VAR_8 = VAR_0;
 futils__rmdir_data VAR_9;


 if (FUNC_3(&VAR_8, VAR_4, VAR_5, ((void*)0)) < 0)
  return -1;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.base = VAR_5 ? VAR_5 : "";
 VAR_9.baselen = VAR_5 ? FUNC_6(VAR_5) : 0;
 VAR_9.flags = VAR_6;

 VAR_7 = FUNC_0(&VAR_9, &VAR_8);


 if (!VAR_7 && (VAR_6 & VAR_2) != 0)
  VAR_7 = FUNC_4(
   &VAR_8, VAR_5, VAR_3, &VAR_9);

 if (VAR_7 == VAR_1) {
  FUNC_2();
  VAR_7 = 0;
 }

 FUNC_1(&VAR_8);

 return VAR_7;
}
