
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_diff ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int **,int ,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_6)
{
 git_diff *VAR_7;
 git_buf VAR_8 = VAR_0;




 FUNC_2(&VAR_8, VAR_4);
 FUNC_2(&VAR_8, VAR_2);
 FUNC_2(&VAR_8, VAR_6);
 FUNC_2(&VAR_8, VAR_5);
 FUNC_2(&VAR_8, VAR_3);

 FUNC_0(VAR_1,
  FUNC_3(&VAR_7, VAR_8.ptr, VAR_8.size));

 FUNC_1(&VAR_8);
}
