
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,struct stat*) ;
 size_t FUNC_10 (char const*) ;

void FUNC_11(void)
{
 struct stat VAR_2;
 const char *VAR_3 = "This is some other stuff to copy\n";

 FUNC_3(FUNC_5("an_dir/in_a_dir", 0775, VAR_0));
 FUNC_2("an_dir/in_a_dir/copy_me", VAR_3);
 FUNC_1(FUNC_8("an_dir"));

 FUNC_3(FUNC_6
  ("an_dir/second_dir/and_more/copy_me_two", 0775));

 FUNC_3(FUNC_4
  ("an_dir/in_a_dir/copy_me",
   "an_dir/second_dir/and_more/copy_me_two",
   0664));

 FUNC_3(FUNC_9("an_dir/second_dir/and_more/copy_me_two", &VAR_2));
 FUNC_1(FUNC_0(VAR_2.st_mode));
 FUNC_1(FUNC_10(VAR_3) == (size_t)VAR_2.st_size);

 FUNC_3(FUNC_7("an_dir", ((void*)0), VAR_1));
 FUNC_1(!FUNC_8("an_dir"));
}
