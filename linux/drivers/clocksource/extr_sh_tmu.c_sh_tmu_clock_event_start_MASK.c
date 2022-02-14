
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_tmu_channel {int periodic; TYPE_1__* tmu; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_tmu_channel*) ;
 int FUNC_1 (struct sh_tmu_channel*,int,int) ;

__attribute__((used)) static void FUNC_2(struct sh_tmu_channel *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1);

 if (VAR_2) {
  VAR_1->periodic = (VAR_1->tmu->rate + VAR_0/2) / VAR_0;
  FUNC_1(VAR_1, VAR_1->periodic, 1);
 }
}
