
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opa_vnic_grp_stats {int s_64; int s_65_127; int s_128_255; int s_256_511; int s_512_1023; int s_1024_1518; int s_1519_max; } ;



__attribute__((used)) static inline void FUNC_0(struct opa_vnic_grp_stats *VAR_0,
           int VAR_1)
{

 if (VAR_1 >= 1515)
  VAR_0->s_1519_max++;
 else if (VAR_1 >= 1020)
  VAR_0->s_1024_1518++;
 else if (VAR_1 >= 508)
  VAR_0->s_512_1023++;
 else if (VAR_1 >= 252)
  VAR_0->s_256_511++;
 else if (VAR_1 >= 124)
  VAR_0->s_128_255++;
 else if (VAR_1 >= 61)
  VAR_0->s_65_127++;
 else
  VAR_0->s_64++;
}
