
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u32 *VAR_2, size_t VAR_3)
{
 if (VAR_3 < VAR_1 + 1)
  return -VAR_0;


 return ((VAR_2[VAR_1] >> 2) & 3) != 0;
}
