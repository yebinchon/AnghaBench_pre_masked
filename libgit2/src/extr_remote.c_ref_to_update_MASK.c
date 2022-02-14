
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_remote ;
typedef int git_refspec ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(int *VAR_2, git_buf *VAR_3, git_remote *VAR_4, git_refspec *VAR_5, const char *VAR_6)
{
 int VAR_7 = 0;
 git_repository *VAR_8;
 git_buf VAR_9 = VAR_0;
 git_buf VAR_10 = VAR_0;

 VAR_8 = FUNC_10(VAR_4);

 if ((!FUNC_6(VAR_6)) ||
     !FUNC_9(VAR_4) ||
     (VAR_7 = FUNC_2(&VAR_9, VAR_8, VAR_6) < 0) ||
     FUNC_0(FUNC_9(VAR_4), FUNC_3(&VAR_9)) ||
     (VAR_7 = FUNC_1(&VAR_10, VAR_8, VAR_6)) < 0 ||
     !FUNC_7(VAR_5, FUNC_3(&VAR_10)) ||
     (VAR_7 = FUNC_8(VAR_3, VAR_5, VAR_10.ptr)) < 0) {

  if (VAR_7 == VAR_1) {
   FUNC_5();
   VAR_7 = 0;
  }

  *VAR_2 = 0;
 } else {
  *VAR_2 = 1;
 }

 FUNC_4(&VAR_9);
 FUNC_4(&VAR_10);
 return VAR_7;
}
