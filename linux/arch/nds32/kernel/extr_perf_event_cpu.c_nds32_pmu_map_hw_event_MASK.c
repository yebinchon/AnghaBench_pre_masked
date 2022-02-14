
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_0(const unsigned int (*VAR_3)[VAR_2],
         u64 VAR_4)
{
 int VAR_5;

 if (VAR_4 >= VAR_2)
  return -VAR_0;

 VAR_5 = (*VAR_3)[VAR_4];
 return VAR_5 == VAR_1 ? -VAR_0 : VAR_5;
}
