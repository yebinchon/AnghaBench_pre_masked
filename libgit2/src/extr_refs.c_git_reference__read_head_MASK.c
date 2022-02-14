
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_7__ {scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 char* FUNC_6 (char const*) ;
 int * FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (int **,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(
 git_reference **VAR_2,
 git_repository *VAR_3,
 const char *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 char *VAR_6 = ((void*)0);
 int VAR_7;

 if ((VAR_7 = FUNC_5(&VAR_5, VAR_4)) < 0)
  goto out;
 FUNC_4(&VAR_5);

 if (FUNC_1(VAR_5.ptr, VAR_1, FUNC_9(VAR_1)) == 0) {
  FUNC_2(&VAR_5, VAR_5.ptr + FUNC_9(VAR_1));

  VAR_6 = FUNC_6(VAR_4);

  if ((*VAR_2 = FUNC_7(VAR_6, VAR_5.ptr)) == ((void*)0)) {
   VAR_7 = -1;
   goto out;
  }
 } else {
  if ((VAR_7 = FUNC_8(VAR_2, VAR_3, VAR_5.ptr)) < 0)
   goto out;
 }

out:
 FUNC_0(VAR_6);
 FUNC_3(&VAR_5);

 return VAR_7;
}
