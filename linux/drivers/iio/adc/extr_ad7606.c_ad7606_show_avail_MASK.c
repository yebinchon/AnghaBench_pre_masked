
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,unsigned int const) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_1, const unsigned int *VAR_2,
     unsigned int VAR_3, bool VAR_4)
{
 size_t VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 += FUNC_0(VAR_1 + VAR_5, VAR_0 - VAR_5,
   VAR_4 ? "0.%06u " : "%u ", VAR_2[VAR_6]);
 }
 VAR_1[VAR_5 - 1] = '\n';

 return VAR_5;
}
