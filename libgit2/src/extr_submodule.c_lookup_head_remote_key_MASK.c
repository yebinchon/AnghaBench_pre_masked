
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;

__attribute__((used)) static int FUNC_8(git_buf *VAR_3, git_repository *VAR_4)
{
 int VAR_5;
 git_reference *VAR_6 = ((void*)0);
 git_buf VAR_7 = VAR_0;


 if ((VAR_5 = FUNC_7(&VAR_6, VAR_4)) < 0)
  return VAR_5;






 if (!FUNC_5(VAR_6)) {
  FUNC_3(VAR_2,
   "HEAD does not refer to a branch.");
  VAR_5 = VAR_1;
  goto done;
 }


 if ((VAR_5 = FUNC_1(
  &VAR_7,
  VAR_4,
  FUNC_6(VAR_6))) < 0)
  goto done;


 if ((VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_7.ptr)) < 0)
  goto done;

done:
 FUNC_2(&VAR_7);
 FUNC_4(VAR_6);

 return VAR_5;
}
