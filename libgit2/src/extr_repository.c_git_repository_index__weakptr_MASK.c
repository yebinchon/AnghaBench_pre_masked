
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * _index; int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_index ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(git_index **VAR_3, git_repository *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_3 && VAR_4);

 if (VAR_4->_index == ((void*)0)) {
  git_buf VAR_6 = VAR_0;
  git_index *VAR_7;

  if ((VAR_5 = FUNC_4(&VAR_6, VAR_4->gitdir, VAR_2)) < 0)
   return VAR_5;

  VAR_5 = FUNC_6(&VAR_7, VAR_6.ptr);
  if (!VAR_5) {
   FUNC_0(VAR_7, VAR_4);

   VAR_7 = FUNC_2(&VAR_4->_index, ((void*)0), VAR_7);
   if (VAR_7 != ((void*)0)) {
    FUNC_0(VAR_7, ((void*)0));
    FUNC_5(VAR_7);
   }

   VAR_5 = FUNC_7(VAR_4->_index,
                              VAR_1);
  }

  FUNC_3(&VAR_6);
 }

 *VAR_3 = VAR_4->_index;
 return VAR_5;
}
