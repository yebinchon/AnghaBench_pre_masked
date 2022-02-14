
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,size_t) ;
 int * VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_3, size_t VAR_4, loff_t *VAR_5)
{
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return -VAR_0;
 if (*VAR_5 > VAR_1)
  return 0;

 VAR_6 = *VAR_5;
 if (VAR_6 + VAR_4 > VAR_1)
  VAR_4 = VAR_1 - VAR_6;

 FUNC_0(&VAR_2[VAR_6], VAR_3, VAR_4);
 *VAR_5 = VAR_6 + VAR_4;
 return VAR_4;
}
