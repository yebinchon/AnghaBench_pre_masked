
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (char const*) ;

void FUNC_8(void)
{
 struct stat VAR_0;
 const char *VAR_1 = "This is some stuff to copy\n";

 FUNC_2("copy_me", VAR_1);

 FUNC_3(FUNC_4("copy_me", "copy_me_two", 0664));

 FUNC_3(FUNC_5("copy_me_two", &VAR_0));
 FUNC_1(FUNC_0(VAR_0.st_mode));
 FUNC_1(FUNC_7(VAR_1) == (size_t)VAR_0.st_size);

 FUNC_3(FUNC_6("copy_me_two"));
 FUNC_3(FUNC_6("copy_me"));
}
