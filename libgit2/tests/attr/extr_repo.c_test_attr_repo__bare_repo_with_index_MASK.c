
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (char const**,int ,int ,char*,int,char const**) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;

void FUNC_15(void)
{
 const char *VAR_1[4] = { "test1", "test2", "test3", "test4" };
 const char *VAR_2[4];
 git_index *VAR_3;

 FUNC_6(FUNC_12(&VAR_3, VAR_0));

 FUNC_5(
  "attr/.gitattributes",
  "*.txt test1 test2=foobar -test3\n"
  "trial.txt -test1 test2=barfoo !test3 test4\n");
 FUNC_6(FUNC_9(VAR_3, ".gitattributes"));
 FUNC_10(VAR_3);

 FUNC_7(FUNC_14("attr/.gitattributes"));
 FUNC_3(!FUNC_11("attr/.gitattributes"));

 FUNC_6(FUNC_13(VAR_0));

 FUNC_6(FUNC_8(VAR_2, VAR_0, 0, "file.txt", 4, VAR_1));

 FUNC_3(FUNC_1(VAR_2[0]));
 FUNC_4("foobar", VAR_2[1]);
 FUNC_3(FUNC_0(VAR_2[2]));
 FUNC_3(FUNC_2(VAR_2[3]));

 FUNC_6(FUNC_8(VAR_2, VAR_0, 0, "trial.txt", 4, VAR_1));

 FUNC_3(FUNC_0(VAR_2[0]));
 FUNC_4("barfoo", VAR_2[1]);
 FUNC_3(FUNC_2(VAR_2[2]));
 FUNC_3(FUNC_1(VAR_2[3]));

 FUNC_6(FUNC_8(VAR_2, VAR_0, 0, "sub/sub/subdir.txt", 4, VAR_1));

 FUNC_3(FUNC_1(VAR_2[0]));
 FUNC_4("foobar", VAR_2[1]);
 FUNC_3(FUNC_0(VAR_2[2]));
 FUNC_3(FUNC_2(VAR_2[3]));
}
