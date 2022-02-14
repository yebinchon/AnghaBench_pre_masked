
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u64 ;


 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(u64 VAR_0, u64 VAR_1, int VAR_2)
{
 const u64 VAR_3 = ~0ull << FUNC_1(VAR_2 + 1);

 FUNC_0(VAR_0 >= VAR_1);
 return (VAR_0 ^ VAR_1) & VAR_3 && (VAR_0 & ~VAR_3) == 0;
}
