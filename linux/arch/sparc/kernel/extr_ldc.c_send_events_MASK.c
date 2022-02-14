
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event ) (int ,unsigned int) ;} ;
struct ldc_channel {int event_arg; TYPE_1__ cfg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct ldc_channel *VAR_3, unsigned int VAR_4)
{
 if (VAR_4 & VAR_1)
  VAR_3->cfg.event(VAR_3->event_arg, VAR_1);
 if (VAR_4 & VAR_2)
  VAR_3->cfg.event(VAR_3->event_arg, VAR_2);
 if (VAR_4 & VAR_0)
  VAR_3->cfg.event(VAR_3->event_arg, VAR_0);
}
