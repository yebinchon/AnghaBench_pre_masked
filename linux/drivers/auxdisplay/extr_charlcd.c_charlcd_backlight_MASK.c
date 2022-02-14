
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charlcd_priv {int bl_tempo_lock; int bl_tempo; } ;
struct charlcd {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* backlight ) (struct charlcd*,int) ;} ;


 struct charlcd_priv* FUNC_0 (struct charlcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct charlcd*,int) ;

__attribute__((used)) static void FUNC_4(struct charlcd *VAR_0, int VAR_1)
{
 struct charlcd_priv *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_0->ops->backlight)
  return;

 FUNC_1(&VAR_2->bl_tempo_lock);
 if (!VAR_2->bl_tempo)
  VAR_0->ops->backlight(VAR_0, VAR_1);
 FUNC_2(&VAR_2->bl_tempo_lock);
}
