
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,struct stat*) ;

bool FUNC_3(const char *VAR_0)
{
 struct stat VAR_1, VAR_2;

 FUNC_0(FUNC_2(VAR_0, &VAR_1));
 FUNC_0(FUNC_1(VAR_0, VAR_1 ^ 0100));
 FUNC_0(FUNC_2(VAR_0, &VAR_2));

 return (VAR_1 != VAR_2);
}
