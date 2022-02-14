
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int read; } ;
struct TYPE_7__ {int * index; int * repo; TYPE_1__ reader; } ;
typedef TYPE_2__ index_reader ;
typedef int git_repository ;
typedef int git_reader ;
typedef int git_index ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int **,int *) ;
 int VAR_0 ;

int FUNC_5(
 git_reader **VAR_1,
 git_repository *VAR_2,
 git_index *VAR_3)
{
 index_reader *VAR_4;
 int VAR_5;

 FUNC_1(VAR_1 && VAR_2);

 VAR_4 = FUNC_2(1, sizeof(index_reader));
 FUNC_0(VAR_4);

 VAR_4->reader.read = VAR_0;
 VAR_4->repo = VAR_2;

 if (VAR_3) {
  VAR_4->index = VAR_3;
 } else if ((VAR_5 = FUNC_4(&VAR_4->index, VAR_2)) < 0) {
  FUNC_3(VAR_4);
  return VAR_5;
 }

 *VAR_1 = (git_reader *)VAR_4;
 return 0;
}
