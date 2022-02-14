
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sh_cmt_channel {int timer_bit; TYPE_1__* cmt; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct sh_cmt_channel*) ;
 int FUNC_3 (struct sh_cmt_channel*,int) ;

__attribute__((used)) static void FUNC_4(struct sh_cmt_channel *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;


 FUNC_0(&VAR_0->cmt->lock, VAR_2);
 VAR_3 = FUNC_2(VAR_0);

 if (VAR_1)
  VAR_3 |= 1 << VAR_0->timer_bit;
 else
  VAR_3 &= ~(1 << VAR_0->timer_bit);

 FUNC_3(VAR_0, VAR_3);
 FUNC_1(&VAR_0->cmt->lock, VAR_2);
}
