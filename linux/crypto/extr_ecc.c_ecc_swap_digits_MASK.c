
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static inline void FUNC_1(const u64 *VAR_0, u64 *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_1[VAR_3] = FUNC_0(VAR_0[VAR_2 - 1 - VAR_3]);
}
