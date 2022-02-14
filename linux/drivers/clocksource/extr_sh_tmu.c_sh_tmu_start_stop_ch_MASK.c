
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_tmu_channel {int index; TYPE_1__* tmu; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (struct sh_tmu_channel*,int ) ;
 int FUNC_3 (struct sh_tmu_channel*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sh_tmu_channel *VAR_1, int VAR_2)
{
 unsigned long VAR_3, VAR_4;


 FUNC_0(&VAR_1->tmu->lock, VAR_3);
 VAR_4 = FUNC_2(VAR_1, VAR_0);

 if (VAR_2)
  VAR_4 |= 1 << VAR_1->index;
 else
  VAR_4 &= ~(1 << VAR_1->index);

 FUNC_3(VAR_1, VAR_0, VAR_4);
 FUNC_1(&VAR_1->tmu->lock, VAR_3);
}
