
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dm_block_t ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(dm_block_t VAR_1)
{
 bool VAR_2 = VAR_1 > 0;
 bool VAR_3 = (VAR_1 & (VAR_0 - 1)) == 0;

 return VAR_2 && VAR_3;
}
