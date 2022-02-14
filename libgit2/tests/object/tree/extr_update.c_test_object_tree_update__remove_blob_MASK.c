
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {TYPE_1__ member_0; } ;
struct TYPE_7__ {char const* member_3; int member_2; TYPE_2__ member_1; int member_0; } ;
typedef TYPE_3__ git_tree_update ;
typedef int git_tree ;
typedef int git_oid ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char const*,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int *,int,TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *) ;

void FUNC_11(void)
{
 git_oid VAR_3, VAR_4, VAR_5;
 git_tree *VAR_6;
 git_index *VAR_7;
 const char *VAR_8 = "README";

 git_tree_update VAR_9[] = {
  { VAR_1, {{0}}, VAR_0 , VAR_8},
 };

 FUNC_1(FUNC_7(&VAR_5, "c4dc1555e4d4fa0e0c9c3fc46734c7c35b3ce90b"));
 FUNC_1(FUNC_10(&VAR_6, VAR_2, &VAR_5));


 FUNC_1(FUNC_3(&VAR_7));
 FUNC_1(FUNC_4(VAR_7, VAR_6));
 FUNC_1(FUNC_5(VAR_7, VAR_8, 0));
 FUNC_1(FUNC_6(&VAR_3, VAR_7, VAR_2));
 FUNC_2(VAR_7);


 FUNC_1(FUNC_8(&VAR_4, VAR_2, VAR_6, 1, VAR_9));

 FUNC_0(&VAR_3, &VAR_4);

 FUNC_9(VAR_6);
}
