
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int,int const) ;

__attribute__((used)) static u8 FUNC_1(const u16 *VAR_0, size_t VAR_1)
{
 int VAR_2;
 u8 VAR_3 = 0xFF;

 for (VAR_2 = 0; VAR_2 < VAR_1 - 1; VAR_2++) {
  VAR_3 = FUNC_0(VAR_3, VAR_0[VAR_2] & 0x00FF);
  VAR_3 = FUNC_0(VAR_3, (VAR_0[VAR_2] & 0xFF00) >> 8);
 }
 VAR_3 = FUNC_0(VAR_3, VAR_0[VAR_1 - 1] & 0x00FF);
 VAR_3 ^= 0xFF;

 return VAR_3;
}
