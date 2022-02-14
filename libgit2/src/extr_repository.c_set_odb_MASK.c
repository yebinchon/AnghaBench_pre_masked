
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _odb; } ;
typedef TYPE_1__ git_repository ;
typedef int git_odb ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(git_repository *VAR_0, git_odb *VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_1, VAR_0);
  FUNC_0(VAR_1);
 }

 if ((VAR_1 = FUNC_2(VAR_0->_odb, VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, ((void*)0));
  FUNC_3(VAR_1);
 }
}
