
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * _odb; } ;
typedef TYPE_1__ git_repository ;
typedef int git_odb ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int ) ;

int FUNC_9(git_odb **VAR_3, git_repository *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_4 && VAR_3);

 if (VAR_4->_odb == ((void*)0)) {
  git_buf VAR_6 = VAR_0;
  git_odb *VAR_7;

  if ((VAR_5 = FUNC_8(&VAR_6, VAR_4,
    VAR_2)) < 0 ||
   (VAR_5 = FUNC_7(&VAR_7)) < 0)
   return VAR_5;

  FUNC_0(VAR_7, VAR_4);

  if ((VAR_5 = FUNC_5(VAR_7, VAR_1)) < 0 ||
   (VAR_5 = FUNC_4(VAR_7, VAR_6.ptr, 0, 0)) < 0) {
   FUNC_6(VAR_7);
   return VAR_5;
  }

  VAR_7 = FUNC_2(&VAR_4->_odb, ((void*)0), VAR_7);
  if (VAR_7 != ((void*)0)) {
   FUNC_0(VAR_7, ((void*)0));
   FUNC_6(VAR_7);
  }

  FUNC_3(&VAR_6);
 }

 *VAR_3 = VAR_4->_odb;
 return VAR_5;
}
