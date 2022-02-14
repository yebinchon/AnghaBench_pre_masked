
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 git_oid VAR_3;
 git_oid VAR_4;
 git_commit* VAR_5;
 git_commit* VAR_6;
 git_checkout_options VAR_7 = VAR_1;

 FUNC_5(&VAR_3, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_5(&VAR_4, "e90810b8df3e80c413d903f631643c716887138d");
 FUNC_1(FUNC_4(&VAR_5, VAR_2, &VAR_3));
 FUNC_1(FUNC_4(&VAR_6, VAR_2, &VAR_4));




 VAR_7.checkout_strategy = VAR_0;
 FUNC_2(VAR_2, (git_object*)VAR_6, &VAR_7);
 FUNC_0(0, FUNC_6("testrepo/readme.txt"));

 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
}
