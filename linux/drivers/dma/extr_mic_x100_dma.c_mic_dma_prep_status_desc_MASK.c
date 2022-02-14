
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct mic_dma_desc {unsigned long long qw0; unsigned long long qw1; } ;
typedef unsigned long long dma_addr_t ;


 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct mic_dma_desc *VAR_3, u64 VAR_4,
 dma_addr_t VAR_5, bool VAR_6)
{
 u64 VAR_7, VAR_8;

 VAR_7 = VAR_4;
 VAR_8 = (u64) VAR_1 << VAR_0 | VAR_5;
 if (VAR_6)
  VAR_8 |= (1ULL << VAR_2);
 VAR_3->qw0 = VAR_7;
 VAR_3->qw1 = VAR_8;
}
