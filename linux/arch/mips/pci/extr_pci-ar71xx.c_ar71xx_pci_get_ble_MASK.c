
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int** VAR_0 ;

__attribute__((used)) static inline u32 FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_0[VAR_2 & 3][VAR_1 & 3];
 FUNC_0(VAR_4 == 0xf);
 VAR_4 <<= (VAR_3) ? 20 : 4;

 return VAR_4;
}
