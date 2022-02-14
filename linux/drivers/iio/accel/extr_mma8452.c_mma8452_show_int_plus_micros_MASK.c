
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,int const,int const) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_1, const int (*VAR_2)[2],
         int VAR_3)
{
 size_t VAR_4 = 0;

 while (VAR_3-- > 0)
  VAR_4 += FUNC_0(VAR_1 + VAR_4, VAR_0 - VAR_4, "%d.%06d ",
     VAR_2[VAR_3][0], VAR_2[VAR_3][1]);


 VAR_1[VAR_4 - 1] = '\n';

 return VAR_4;
}
