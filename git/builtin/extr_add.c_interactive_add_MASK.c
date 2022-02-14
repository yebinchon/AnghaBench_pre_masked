
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pathspec*,int ,int,char const*,char const**) ;
 int FUNC_1 (int *,char*,struct pathspec*) ;

int FUNC_2(int VAR_3, const char **VAR_4, const char *VAR_5, int VAR_6)
{
 struct pathspec VAR_7;

 FUNC_0(&VAR_7, 0,
         VAR_0 |
         VAR_2 |
         VAR_1,
         VAR_5, VAR_4);

 return FUNC_1(((void*)0),
       VAR_6 ? "--patch" : ((void*)0),
       &VAR_7);
}
