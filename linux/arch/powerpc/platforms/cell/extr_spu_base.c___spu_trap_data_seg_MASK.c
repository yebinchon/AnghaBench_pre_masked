
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slb_flt; } ;
struct spu {int slb_replace; TYPE_1__ stats; int mm; } ;
struct copro_slb {int dummy; } ;


 int FUNC_0 (int ,unsigned long,struct copro_slb*) ;
 int FUNC_1 (struct spu*,int,struct copro_slb*) ;
 int FUNC_2 (struct spu*) ;

__attribute__((used)) static int FUNC_3(struct spu *VAR_0, unsigned long VAR_1)
{
 struct copro_slb VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->mm, VAR_1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_0, VAR_0->slb_replace, &VAR_2);

 VAR_0->slb_replace++;
 if (VAR_0->slb_replace >= 8)
  VAR_0->slb_replace = 0;

 FUNC_2(VAR_0);
 VAR_0->stats.slb_flt++;
 return 0;
}
