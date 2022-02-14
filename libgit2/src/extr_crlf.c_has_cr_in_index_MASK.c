
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
typedef size_t git_off_t ;
struct TYPE_3__ {int id; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_filter_source ;
typedef int git_blob ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,int *,int *) ;
 void* FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 () ;
 char* FUNC_7 (int const*) ;
 int * FUNC_8 (int const*) ;
 TYPE_1__* FUNC_9 (int *,char const*,int) ;
 scalar_t__ FUNC_10 (int **,int *) ;
 int * FUNC_11 (void const*,char,size_t) ;

__attribute__((used)) static int FUNC_12(const git_filter_source *VAR_0)
{
 git_repository *VAR_1 = FUNC_8(VAR_0);
 const char *VAR_2 = FUNC_7(VAR_0);
 git_index *VAR_3;
 const git_index_entry *VAR_4;
 git_blob *VAR_5;
 const void *VAR_6;
 git_off_t VAR_7;
 bool VAR_8;

 if (!VAR_2)
  return 0;

 if (FUNC_10(&VAR_3, VAR_1) < 0) {
  FUNC_6();
  return 0;
 }

 if (!(VAR_4 = FUNC_9(VAR_3, VAR_2, 0)) &&
  !(VAR_4 = FUNC_9(VAR_3, VAR_2, 1)))
  return 0;

 if (!FUNC_0(VAR_4->mode))
  return 1;

 if (FUNC_3(&VAR_5, VAR_1, &VAR_4->id) < 0)
  return 0;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_5(VAR_5);
 if (!FUNC_1(VAR_7))
  VAR_7 = (size_t)-1;

 VAR_8 = (VAR_6 != ((void*)0) &&
  VAR_7 > 0 &&
  FUNC_11(VAR_6, '\r', (size_t)VAR_7) != ((void*)0));

 FUNC_2(VAR_5);
 return VAR_8;
}
