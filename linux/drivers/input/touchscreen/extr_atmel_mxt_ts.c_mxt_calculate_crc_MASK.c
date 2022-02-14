
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(u8 *VAR_1, off_t VAR_2, off_t VAR_3)
{
 u32 VAR_4 = 0;
 u8 *VAR_5 = VAR_1 + VAR_2;
 u8 *VAR_6 = VAR_1 + VAR_3 - 1;

 if (VAR_3 < VAR_2)
  return -VAR_0;

 while (VAR_5 < VAR_6) {
  FUNC_0(&VAR_4, *VAR_5, *(VAR_5 + 1));
  VAR_5 += 2;
 }


 if (VAR_5 == VAR_6)
  FUNC_0(&VAR_4, *VAR_5, 0);


 VAR_4 &= 0x00FFFFFF;

 return VAR_4;
}
