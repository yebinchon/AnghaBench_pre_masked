
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
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
 int VAR_6 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int ) ;
 unsigned int FUNC_7 (char*) ;
 unsigned int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int **,char*) ;
 int FUNC_13 (int *,int *,int ,int *) ;
 int FUNC_14 (int *,int *,char*) ;
 int FUNC_15 (unsigned int*,int *,char*) ;

void FUNC_16(void)
{
 git_oid VAR_10;
 git_object *VAR_11;
 unsigned int VAR_12;
 git_checkout_options VAR_13 = VAR_2;
 git_index *VAR_14;
 git_repository *VAR_15;

 VAR_13.checkout_strategy |=
  VAR_1 | VAR_0;

 FUNC_1(FUNC_9(&VAR_10, VAR_9, "HEAD"));
 FUNC_1(FUNC_6(&VAR_11, VAR_9, &VAR_10, VAR_3));

 FUNC_1(FUNC_13(VAR_9, VAR_11, VAR_4, &VAR_8));

 FUNC_0(0, FUNC_7("./testrepo/ab/"));

 FUNC_1(FUNC_14(&VAR_7, VAR_9, "subtrees"));

 FUNC_1(FUNC_2(VAR_9, VAR_7, &VAR_13));

 FUNC_0(1, FUNC_8("./testrepo/ab/de/2.txt"));
 FUNC_1(FUNC_15(&VAR_12, VAR_9, "ab/de/2.txt"));
 FUNC_0(VAR_5, VAR_12);

 FUNC_1(FUNC_12(&VAR_15, "testrepo"));
 FUNC_1(FUNC_15(&VAR_12, VAR_15, "ab/de/2.txt"));
 FUNC_0(VAR_6, VAR_12);
 FUNC_10(VAR_15);

 FUNC_1(FUNC_11(&VAR_14, VAR_9));
 FUNC_1(FUNC_4(VAR_14));

 FUNC_1(FUNC_12(&VAR_15, "testrepo"));
 FUNC_1(FUNC_15(&VAR_12, VAR_15, "ab/de/2.txt"));
 FUNC_0(VAR_5, VAR_12);
 FUNC_10(VAR_15);

 FUNC_5(VAR_11);
 FUNC_3(VAR_14);
}
