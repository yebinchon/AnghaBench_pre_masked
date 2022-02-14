
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_nlink; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,struct stat*) ;

void FUNC_4(const char *VAR_0)
{

 struct stat VAR_1;

 FUNC_0(FUNC_2(VAR_0));
 FUNC_1(FUNC_3(VAR_0, &VAR_1));
 FUNC_0(VAR_1.st_nlink > 1);
}
