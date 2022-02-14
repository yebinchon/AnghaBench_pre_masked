
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int,int const) ;
 int** VAR_0 ;

__attribute__((used)) static inline int FUNC_1(int VAR_1, u16 VAR_2, u8 VAR_3)
{
 const int *VAR_4 = VAR_0[VAR_1];

 if (VAR_3 & (1 << VAR_1))
  return FUNC_0(VAR_2 * 2250, 1024);
 return FUNC_0(VAR_2 * (VAR_4[0] + VAR_4[1]) * 2250, VAR_4[1] * 1024);
}
