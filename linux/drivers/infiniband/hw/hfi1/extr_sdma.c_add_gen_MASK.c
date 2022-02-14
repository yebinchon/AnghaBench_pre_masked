
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sdma_engine {int descq_tail; int sdma_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u64 FUNC_0(struct sdma_engine *VAR_3, u64 VAR_4)
{
 u8 VAR_5 = (VAR_3->descq_tail >> VAR_3->sdma_shift) & 3;

 VAR_4 &= ~VAR_2;
 VAR_4 |= ((u64)VAR_5 & VAR_0)
   << VAR_1;
 return VAR_4;
}
