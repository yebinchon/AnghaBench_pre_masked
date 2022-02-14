
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_odb_backend ;
typedef int git_odb ;
struct TYPE_2__ {int position; } ;
typedef TYPE_1__ fake_backend ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,size_t) ;
 size_t FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(git_odb *VAR_0)
{
 size_t VAR_1, VAR_2 = FUNC_4(VAR_0);
 fake_backend *VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1) {
  FUNC_2(FUNC_3((git_odb_backend **)&VAR_3, VAR_0, VAR_1));
  FUNC_0(VAR_3 != ((void*)0));
  FUNC_1(VAR_1, VAR_3->position);
 }
}
