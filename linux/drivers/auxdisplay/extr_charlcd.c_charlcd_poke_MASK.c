
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charlcd_priv {int bl_tempo; int flags; int bl_tempo_lock; int bl_work; } ;
struct charlcd {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* backlight ) (struct charlcd*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct charlcd_priv* FUNC_1 (struct charlcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct charlcd*,int) ;

void FUNC_6(struct charlcd *VAR_3)
{
 struct charlcd_priv *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_3->ops->backlight)
  return;

 FUNC_0(&VAR_4->bl_work);

 FUNC_2(&VAR_4->bl_tempo_lock);
 if (!VAR_4->bl_tempo && !(VAR_4->flags & VAR_2))
  VAR_3->ops->backlight(VAR_3, 1);
 VAR_4->bl_tempo = 1;
 FUNC_4(&VAR_4->bl_work, VAR_1 * VAR_0);
 FUNC_3(&VAR_4->bl_tempo_lock);
}
