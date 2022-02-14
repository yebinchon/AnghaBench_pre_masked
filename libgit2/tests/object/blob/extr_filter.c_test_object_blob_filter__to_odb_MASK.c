
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zeroed ;
typedef int git_filter_list ;
typedef int git_config ;
struct TYPE_7__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;
struct TYPE_8__ {int ptr; int size; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 TYPE_5__* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,char*,int ,int ) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;

void FUNC_16(void)
{
 git_filter_list *VAR_6 = ((void*)0);
 git_config *VAR_7;
 int VAR_8;
 git_blob *VAR_9;
 git_buf VAR_10 = VAR_1, VAR_11;

 FUNC_4(FUNC_13(&VAR_7, VAR_5));
 FUNC_0(VAR_7);

 FUNC_5(VAR_5);
 FUNC_3("empty_standard_repo/.gitattributes", "*.txt text\n");

 FUNC_4(FUNC_12(
  &VAR_6, VAR_5, ((void*)0), "filename.txt", VAR_2, 0));
 FUNC_0(VAR_6 != ((void*)0));

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  FUNC_4(FUNC_7(&VAR_9, VAR_5, &VAR_4[VAR_8]));


  FUNC_4(FUNC_10(&VAR_10, VAR_6, VAR_9));
  FUNC_2(VAR_3[VAR_8].size, VAR_10.size);
  FUNC_1(
   0, FUNC_14(VAR_10.ptr, VAR_3[VAR_8].ptr, VAR_10.size));


  FUNC_15(&VAR_11, 0, sizeof(VAR_11));
  FUNC_4(FUNC_10(&VAR_11, VAR_6, VAR_9));
  FUNC_2(VAR_3[VAR_8].size, VAR_11.size);
  FUNC_1(
   0, FUNC_14(VAR_11.ptr, VAR_3[VAR_8].ptr, VAR_11.size));
  FUNC_8(&VAR_11);

  FUNC_6(VAR_9);
 }

 FUNC_11(VAR_6);
 FUNC_8(&VAR_10);
 FUNC_9(VAR_7);
}
