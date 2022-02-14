
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int * FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;

int FUNC_6(git_repository *VAR_2, const char *VAR_3, int VAR_4)
{
 git_buf VAR_5 = VAR_0;
 int VAR_6, VAR_7;

 if (VAR_4 == 0)
  VAR_4 = VAR_1;


 if (FUNC_4(VAR_3, '\\') != ((void*)0)) {
  if ((VAR_6 = FUNC_3(&VAR_5, VAR_3)) < 0)
   return VAR_6;
 } else {
  FUNC_0(&VAR_5, VAR_3, FUNC_5(VAR_3));
 }

 VAR_7 = FUNC_2(VAR_2, VAR_5.ptr, 0, VAR_4);
 FUNC_1(&VAR_5);

 return VAR_7;
}
