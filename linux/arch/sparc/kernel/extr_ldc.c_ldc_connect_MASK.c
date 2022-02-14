
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct ldc_channel {int flags; scalar_t__ hs_state; int lock; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ldc_channel*) ;

int FUNC_3(struct ldc_channel *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5->cfg.mode == VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_5->lock, VAR_6);

 if (!(VAR_5->flags & VAR_1) ||
     !(VAR_5->flags & VAR_2) ||
     VAR_5->hs_state != VAR_3)
  VAR_7 = ((VAR_5->hs_state > VAR_3) ? 0 : -VAR_0);
 else
  VAR_7 = FUNC_2(VAR_5);

 FUNC_1(&VAR_5->lock, VAR_6);

 return VAR_7;
}
