
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {unsigned long long sdma_generation; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct qib_pportdata *VAR_2,
      u64 *VAR_3, u64 VAR_4, u64 VAR_5,
      u64 VAR_6)
{

 FUNC_0(VAR_4 & 3);

 VAR_3[1] = VAR_4 >> 32;

 VAR_3[0] = (VAR_4 & 0xfffffffcULL) << 32;

 VAR_3[0] |= (VAR_2->sdma_generation & 3ULL) <<
  VAR_1;

 VAR_3[0] |= (VAR_5 & 0x7ffULL) << VAR_0;

 VAR_3[0] |= VAR_6 & 0x7ffULL;
}
