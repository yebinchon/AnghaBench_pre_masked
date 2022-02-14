
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rsvd_bits_validate {int** rsvd_bits_mask; unsigned long long bad_mt_xwr; } ;



__attribute__((used)) static bool
FUNC_0(struct rsvd_bits_validate *VAR_0, u64 VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_1 >> 7) & 1, VAR_4 = VAR_1 & 0x3f;

 return (VAR_1 & VAR_0->rsvd_bits_mask[VAR_3][VAR_2-1]) |
  ((VAR_0->bad_mt_xwr & (1ull << VAR_4)) != 0);
}
