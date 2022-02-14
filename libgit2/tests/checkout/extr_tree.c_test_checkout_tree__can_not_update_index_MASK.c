
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int ) ;
 unsigned int FUNC_7 (char*) ;
 unsigned int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (int *,int ,char*) ;
 int FUNC_13 (unsigned int*,int ,char*) ;

void FUNC_14(void)
{
 git_oid VAR_9;
 git_object *VAR_10;
 unsigned int VAR_11;
 git_checkout_options VAR_12 = VAR_2;
 git_index *VAR_13;

 VAR_12.checkout_strategy |=
  VAR_1 | VAR_0;

 FUNC_1(FUNC_9(&VAR_9, VAR_8, "HEAD"));
 FUNC_1(FUNC_6(&VAR_10, VAR_8, &VAR_9, VAR_3));

 FUNC_1(FUNC_11(VAR_8, VAR_10, VAR_4, &VAR_7));

 FUNC_0(0, FUNC_7("./testrepo/ab/"));

 FUNC_1(FUNC_12(&VAR_6, VAR_8, "subtrees"));

 FUNC_1(FUNC_2(VAR_8, VAR_6, &VAR_12));

 FUNC_0(1, FUNC_8("./testrepo/ab/de/2.txt"));
 FUNC_1(FUNC_13(&VAR_11, VAR_8, "ab/de/2.txt"));
 FUNC_0(VAR_5, VAR_11);

 FUNC_1(FUNC_10(&VAR_13, VAR_8));
 FUNC_1(FUNC_4(VAR_13));

 FUNC_1(FUNC_13(&VAR_11, VAR_8, "ab/de/2.txt"));
 FUNC_0(VAR_5, VAR_11);

 FUNC_5(VAR_10);
 FUNC_3(VAR_13);
}
