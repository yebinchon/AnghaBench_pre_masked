
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** strings; int count; } ;
struct TYPE_5__ {int checkout_strategy; TYPE_1__ paths; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int **,int ,char*) ;

void FUNC_8(void)
{
 char *VAR_6[] = { "[l-z]*.txt" };



 VAR_4.checkout_strategy =
  VAR_0 | VAR_1;

 FUNC_1(FUNC_7(&VAR_3, VAR_5, "8496071c1b46c854b31185ea97743be6a8774479"));

 FUNC_1(FUNC_2(VAR_5, VAR_3, &VAR_4));
 FUNC_1(
  FUNC_6(VAR_5, FUNC_4(VAR_3)));

 FUNC_3(VAR_3);
 VAR_3 = ((void*)0);

 FUNC_0(FUNC_5("testrepo/README"));
 FUNC_0(!FUNC_5("testrepo/branch_file.txt"));
 FUNC_0(!FUNC_5("testrepo/link_to_new.txt"));
 FUNC_0(!FUNC_5("testrepo/new.txt"));



 VAR_4.checkout_strategy = VAR_2;
 VAR_4.paths.strings = VAR_6;
 VAR_4.paths.count = 1;

 FUNC_1(FUNC_7(&VAR_3, VAR_5, "refs/heads/master"));

 FUNC_1(FUNC_2(VAR_5, VAR_3, &VAR_4));

 FUNC_0(FUNC_5("testrepo/README"));
 FUNC_0(!FUNC_5("testrepo/branch_file.txt"));
 FUNC_0(FUNC_5("testrepo/link_to_new.txt"));
 FUNC_0(FUNC_5("testrepo/new.txt"));
}
