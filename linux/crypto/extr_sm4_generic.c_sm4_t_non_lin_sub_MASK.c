
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 size_t* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{
 int VAR_2;
 u8 *VAR_3 = (u8 *)&VAR_1;

 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  VAR_3[VAR_2] = VAR_0[VAR_3[VAR_2]];

 return VAR_1;
}
