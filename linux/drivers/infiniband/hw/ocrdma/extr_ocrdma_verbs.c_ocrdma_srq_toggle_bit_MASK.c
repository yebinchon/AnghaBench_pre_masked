
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocrdma_srq {unsigned int* idx_bit_fields; } ;



__attribute__((used)) static void FUNC_0(struct ocrdma_srq *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_1 / 32;
 u32 VAR_3 = (1U << (VAR_1 % 32));

 VAR_0->idx_bit_fields[VAR_2] ^= VAR_3;
}
