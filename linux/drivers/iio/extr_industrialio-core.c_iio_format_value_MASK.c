
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned int,int,int*) ;
 int FUNC_1 (char*,char*) ;

ssize_t FUNC_2(char *VAR_2, unsigned int VAR_3, int VAR_4, int *VAR_5)
{
 ssize_t VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5);
 if (VAR_6 >= VAR_1 - 1)
  return -VAR_0;

 return VAR_6 + FUNC_1(VAR_2 + VAR_6, "\n");
}
