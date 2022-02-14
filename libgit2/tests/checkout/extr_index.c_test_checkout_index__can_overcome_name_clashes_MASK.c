
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;

void FUNC_12(void)
{
 git_checkout_options VAR_7 = VAR_2;
 git_index *VAR_8;

 FUNC_2(FUNC_9(&VAR_8, VAR_6));
 FUNC_6(VAR_8);

 FUNC_1("./testrepo/path0", "content\r\n");
 FUNC_2(FUNC_10("./testrepo/path1", 0777));
 FUNC_1("./testrepo/path1/file1", "content\r\n");

 FUNC_2(FUNC_5(VAR_8, "path0"));
 FUNC_2(FUNC_5(VAR_8, "path1/file1"));

 FUNC_2(FUNC_11("./testrepo/path0"));
 FUNC_2(FUNC_4(
  "./testrepo/path1", ((void*)0), VAR_5));

 FUNC_1("./testrepo/path1", "content\r\n");
 FUNC_2(FUNC_10("./testrepo/path0", 0777));
 FUNC_1("./testrepo/path0/file0", "content\r\n");

 FUNC_0(FUNC_8("./testrepo/path1"));
 FUNC_0(FUNC_8("./testrepo/path0/file0"));

 VAR_7.checkout_strategy =
  VAR_4 |
  VAR_3 |
  VAR_0;
 FUNC_2(FUNC_3(VAR_6, VAR_8, &VAR_7));

 FUNC_0(FUNC_8("./testrepo/path1"));
 FUNC_0(FUNC_8("./testrepo/path0/file0"));

 VAR_7.checkout_strategy = VAR_1;
 FUNC_2(FUNC_3(VAR_6, VAR_8, &VAR_7));

 FUNC_0(FUNC_8("./testrepo/path0"));
 FUNC_0(FUNC_8("./testrepo/path1/file1"));

 FUNC_7(VAR_8);
}
