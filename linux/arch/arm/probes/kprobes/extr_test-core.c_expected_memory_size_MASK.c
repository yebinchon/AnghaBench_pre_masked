
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int expected_memory ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_0(u32 *VAR_1)
{
 size_t VAR_2 = sizeof(expected_memory);
 int VAR_3 = (uintptr_t)VAR_1 - (uintptr_t)VAR_0;
 if (VAR_3 > 0)
  VAR_2 -= VAR_3;
 return VAR_2;
}
