
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_remote ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(git_remote **VAR_1, git_repository *VAR_2)
{
 int VAR_3;
 git_buf VAR_4 = VAR_0;


 if (!(VAR_3 = FUNC_2(&VAR_4, VAR_2)))
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4.ptr);

 FUNC_0(&VAR_4);

 return VAR_3;
}
