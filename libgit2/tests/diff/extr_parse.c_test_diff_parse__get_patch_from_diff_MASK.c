
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_patch ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
struct TYPE_9__ {int size; int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;
 int FUNC_9 (int **,int *,int *,int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,char*) ;

void FUNC_15(void)
{
 git_repository *VAR_4;
 git_diff *VAR_5, *VAR_6;
 git_tree *VAR_7, *VAR_8;
 git_diff_options VAR_9 = VAR_2;
 git_buf VAR_10 = VAR_0;
 git_patch *VAR_11, *VAR_12;

 VAR_4 = FUNC_4("diff");

 VAR_9.flags = VAR_3;

 FUNC_0((VAR_7 = FUNC_14(VAR_4,
  "d70d245ed97ed2aa596dd1af6536e4bfdb047b69")) != ((void*)0));
 FUNC_0((VAR_8 = FUNC_14(VAR_4,
  "7a9e0b02e63179929fed24f0a3e0f19168114d10")) != ((void*)0));

 FUNC_2(FUNC_9(&VAR_5, VAR_4, VAR_7, VAR_8, &VAR_9));
 FUNC_2(FUNC_8(&VAR_10,
  VAR_5, VAR_1));
 FUNC_2(FUNC_11(&VAR_11, VAR_5, 0));

 FUNC_2(FUNC_7(&VAR_6,
  VAR_10.ptr, VAR_10.size));
 FUNC_2(FUNC_11(&VAR_12, VAR_6, 0));

 FUNC_1(
  FUNC_12(VAR_11),
  FUNC_12(VAR_12));

 FUNC_10(VAR_11);
 FUNC_10(VAR_12);

 FUNC_13(VAR_7);
 FUNC_13(VAR_8);

 FUNC_6(VAR_5);
 FUNC_6(VAR_6);

 FUNC_5(&VAR_10);

 FUNC_3();
}
