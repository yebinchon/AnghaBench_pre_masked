
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef scalar_t__ s64 ;
typedef int loff_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_3, size_t VAR_4, loff_t *VAR_5)
{
 s64 VAR_6;
 int VAR_7;

 if (*VAR_5 >= VAR_2)
  return 0;
 VAR_7 = *VAR_5;
 if ((VAR_7 + VAR_4) > VAR_2)
  VAR_4 = VAR_2 - VAR_7;
 VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_4, VAR_7);
 if (VAR_6 != VAR_1)
  return -VAR_0;
 *VAR_5 += VAR_4;
 return VAR_4;
}
