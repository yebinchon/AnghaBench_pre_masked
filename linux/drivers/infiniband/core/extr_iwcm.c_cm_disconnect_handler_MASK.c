
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwcm_id_private {scalar_t__ state; int lock; } ;
struct iw_cm_event {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct iwcm_id_private *VAR_2,
      struct iw_cm_event *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_2->lock, VAR_4);
 if (VAR_2->state == VAR_1)
  VAR_2->state = VAR_0;
 FUNC_1(&VAR_2->lock, VAR_4);
}
