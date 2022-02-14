
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1)
{
 int VAR_2 = 0;
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 VAR_4 = (VAR_0 % VAR_1) << 4;
 VAR_3 = VAR_0 / VAR_1;



 for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
  VAR_3 = (VAR_3 << 4) | VAR_4 / VAR_1;
  VAR_4 = (VAR_4 % VAR_1) << 4;
 }

 if ((VAR_4 >> 3) >= VAR_1)
  VAR_3++;

 return VAR_3;
}
