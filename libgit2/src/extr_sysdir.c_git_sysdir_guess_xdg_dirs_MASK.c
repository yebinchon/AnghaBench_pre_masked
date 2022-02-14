
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(git_buf *VAR_2)
{



 git_buf VAR_3 = VAR_0;
 int VAR_4;
 uid_t VAR_5, VAR_6;

 VAR_5 = FUNC_2();
 VAR_6 = FUNC_1();





 if (VAR_5 == VAR_6) {
  if ((VAR_4 = FUNC_3(&VAR_3, "XDG_CONFIG_HOME")) == 0)
   VAR_4 = FUNC_5(VAR_2, VAR_3.ptr, "git");

  if (VAR_4 == VAR_1 && (VAR_4 = FUNC_3(&VAR_3, "HOME")) == 0)
   VAR_4 = FUNC_5(VAR_2, VAR_3.ptr, ".config/git");
 } else {
  if ((VAR_4 = FUNC_0(&VAR_3, VAR_6)) == 0)
   VAR_4 = FUNC_5(VAR_2, VAR_3.ptr, ".config/git");
 }

 if (VAR_4 == VAR_1) {
  FUNC_6();
  VAR_4 = 0;
 }

 FUNC_4(&VAR_3);
 return VAR_4;

}
