
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int,int ) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (char*,int *,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,struct stat*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 size_t FUNC_14 (char const*) ;

void FUNC_15(void)
{
 struct stat VAR_6;
 const char *VAR_7 = "File content\n";

 FUNC_6(FUNC_8("src/b", 0775, VAR_4));
 FUNC_6(FUNC_8("src/c/d", 0775, VAR_4));
 FUNC_6(FUNC_8("src/c/e", 0775, VAR_4));

 FUNC_5("src/f1", VAR_7);
 FUNC_5("src/b/f2", VAR_7);
 FUNC_5("src/c/f3", VAR_7);
 FUNC_5("src/c/d/f4", VAR_7);
 FUNC_5("src/c/d/.f5", VAR_7);


 FUNC_3(FUNC_13("../../b/f2", "src/c/d/l1") == 0);


 FUNC_3(FUNC_10("src"));
 FUNC_3(FUNC_10("src/b"));
 FUNC_3(FUNC_10("src/c/d"));
 FUNC_3(FUNC_11("src/c/d/f4"));



 FUNC_6(
  FUNC_7("src", "t1", VAR_1, 0) );

 FUNC_3(FUNC_10("t1"));
 FUNC_3(FUNC_10("t1/b"));
 FUNC_3(FUNC_10("t1/c"));
 FUNC_3(FUNC_10("t1/c/d"));
 FUNC_3(!FUNC_10("t1/c/e"));

 FUNC_3(FUNC_11("t1/f1"));
 FUNC_3(FUNC_11("t1/b/f2"));
 FUNC_3(FUNC_11("t1/c/f3"));
 FUNC_3(FUNC_11("t1/c/d/f4"));
 FUNC_3(!FUNC_11("t1/c/d/.f5"));

 FUNC_6(FUNC_12("t1/c/f3", &VAR_6));
 FUNC_3(FUNC_1(VAR_6.st_mode));
 FUNC_3(FUNC_14(VAR_7) == (size_t)VAR_6.st_size);


 FUNC_6(FUNC_12("t1/c/d/l1", &VAR_6));
 FUNC_3(FUNC_0(VAR_6.st_mode));


 FUNC_6(FUNC_9("t1", ((void*)0), VAR_5));
 FUNC_3(!FUNC_10("t1"));



 FUNC_6(
  FUNC_7("src", "t2", VAR_2 | VAR_0, 0) );

 FUNC_3(FUNC_10("t2"));
 FUNC_3(FUNC_10("t2/b"));
 FUNC_3(FUNC_10("t2/c"));
 FUNC_3(FUNC_10("t2/c/d"));
 FUNC_3(FUNC_10("t2/c/e"));

 FUNC_3(FUNC_11("t2/f1"));
 FUNC_3(FUNC_11("t2/b/f2"));
 FUNC_3(FUNC_11("t2/c/f3"));
 FUNC_3(FUNC_11("t2/c/d/f4"));
 FUNC_3(FUNC_11("t2/c/d/.f5"));


 FUNC_4(FUNC_12("t2/c/d/l1", &VAR_6));


 FUNC_6(FUNC_9("t2", ((void*)0), VAR_5));
 FUNC_3(!FUNC_10("t2"));


 FUNC_6(FUNC_7("src", "t3", VAR_2 | VAR_3, 0));
 FUNC_3(FUNC_10("t3"));

 FUNC_3(FUNC_10("t3"));
 FUNC_3(FUNC_10("t3/b"));
 FUNC_3(FUNC_10("t3/c"));
 FUNC_3(FUNC_10("t3/c/d"));
 FUNC_3(FUNC_10("t3/c/e"));

 FUNC_2("t3/f1");
 FUNC_2("t3/b/f2");
 FUNC_2("t3/c/f3");
 FUNC_2("t3/c/d/f4");


 FUNC_6(FUNC_9("src", ((void*)0), VAR_5));
}
