
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const u32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u32 VAR_2,
     const unsigned int *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2 == VAR_3[VAR_4])
   return VAR_4;
 }

 return -VAR_1;
}
