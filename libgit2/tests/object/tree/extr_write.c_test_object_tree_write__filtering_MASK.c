
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_treebuilder ;
typedef int git_tree ;
typedef int git_oid ;
struct TYPE_2__ {int attr; scalar_t__ filename; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int *,scalar_t__,int *,int ) ;
 int FUNC_12 (int **,int ,int *) ;
 int FUNC_13 (int *,int *) ;
 int VAR_3 ;

void FUNC_14(void)
{
 git_treebuilder *VAR_4;
 int VAR_5;
 git_oid VAR_6, VAR_7;
 git_tree *VAR_8;

 FUNC_3(&VAR_6, VAR_1);

 FUNC_2(FUNC_12(&VAR_4, VAR_2, ((void*)0)));

 for (VAR_5 = 0; VAR_0[VAR_5].filename; ++VAR_5)
  FUNC_2(FUNC_11(((void*)0),
   VAR_4, VAR_0[VAR_5].filename, &VAR_6, VAR_0[VAR_5].attr));

 FUNC_1(6, (int)FUNC_7(VAR_4));

 FUNC_0(FUNC_10(VAR_4, "apple") != ((void*)0));
 FUNC_0(FUNC_10(VAR_4, "aardvark") != ((void*)0));
 FUNC_0(FUNC_10(VAR_4, "last") != ((void*)0));

 FUNC_8(VAR_4, VAR_3, "apple");

 FUNC_1(4, (int)FUNC_7(VAR_4));

 FUNC_0(FUNC_10(VAR_4, "apple") == ((void*)0));
 FUNC_0(FUNC_10(VAR_4, "aardvark") != ((void*)0));
 FUNC_0(FUNC_10(VAR_4, "last") != ((void*)0));

 FUNC_8(VAR_4, VAR_3, "a");

 FUNC_1(2, (int)FUNC_7(VAR_4));

 FUNC_0(FUNC_10(VAR_4, "aardvark") == ((void*)0));
 FUNC_0(FUNC_10(VAR_4, "last") != ((void*)0));

 FUNC_2(FUNC_13(&VAR_7, VAR_4));

 FUNC_9(VAR_4);

 FUNC_2(FUNC_6(&VAR_8, VAR_2, &VAR_7));

 FUNC_1(2, (int)FUNC_4(VAR_8));

 FUNC_5(VAR_8);
}
