
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 git_checkout_options VAR_6 = VAR_0;

 FUNC_4("./testrepo/dir/subdir/subsubdir", 0755, VAR_4);
 FUNC_1("./testrepo/dir/one", "one\n");
 FUNC_1("./testrepo/dir/subdir/two", "two\n");

 FUNC_0(1, FUNC_5("./testrepo/dir/subdir/subsubdir"));

 VAR_6.checkout_strategy =
  VAR_3 |
  VAR_1 |
  VAR_2;

 FUNC_2(FUNC_3(VAR_5, ((void*)0), &VAR_6));

 FUNC_0(0, FUNC_5("./testrepo/dir"));
}
