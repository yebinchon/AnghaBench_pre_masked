
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char**,int) ;

__attribute__((used)) static char **
FUNC_2(char **VAR_3)
{
 char **VAR_4;

 VAR_0 += VAR_0;
 VAR_4 = (char **)FUNC_1(VAR_1, VAR_0 * sizeof(char *));
 if (VAR_4 == ((void*)0))
  FUNC_0(1, "no memory");

 VAR_3 += (VAR_4 - VAR_1);
 VAR_2 = (VAR_1 = VAR_4) + VAR_0;
 return(VAR_3);
}
