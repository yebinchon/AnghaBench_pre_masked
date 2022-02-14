
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u16 ;



__attribute__((used)) static u16 FUNC_0(const u8 *VAR_0, u16 VAR_1)
{
 u16 VAR_2 = 0;
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += VAR_0[VAR_3];

 return VAR_2;
}
