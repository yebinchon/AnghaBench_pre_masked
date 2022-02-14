
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {unsigned int cbm_len; unsigned long min_cbm_bits; } ;
struct rdt_resource {unsigned long default_ctrl; TYPE_1__ cache; } ;


 unsigned long FUNC_0 (unsigned long*,unsigned int) ;
 unsigned int FUNC_1 (unsigned long*,unsigned int,unsigned long) ;
 unsigned long FUNC_2 (unsigned long*,unsigned int,unsigned long) ;
 int FUNC_3 (char*,int,unsigned long*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

bool FUNC_6(char *VAR_0, u32 *VAR_1, struct rdt_resource *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_2->cache.cbm_len;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_0, 16, &VAR_5);
 if (VAR_7) {
  FUNC_4("Non-hex character in the mask %s\n", VAR_0);
  return 0;
 }

 if (VAR_5 == 0 || VAR_5 > VAR_2->default_ctrl) {
  FUNC_5("Mask out of range\n");
  return 0;
 }

 VAR_3 = FUNC_0(&VAR_5, VAR_6);
 VAR_4 = FUNC_2(&VAR_5, VAR_6, VAR_3);

 if (FUNC_1(&VAR_5, VAR_6, VAR_4) < VAR_6) {
  FUNC_4("The mask %lx has non-consecutive 1-bits\n", VAR_5);
  return 0;
 }

 if ((VAR_4 - VAR_3) < VAR_2->cache.min_cbm_bits) {
  FUNC_4("Need at least %d bits in the mask\n",
        VAR_2->cache.min_cbm_bits);
  return 0;
 }

 *VAR_1 = VAR_5;
 return 1;
}
