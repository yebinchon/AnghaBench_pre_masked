
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ops; } ;
struct charlcd_priv {TYPE_3__ lcd; int bl_work; } ;
struct charlcd {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* backlight ) (TYPE_3__*,int ) ;} ;
struct TYPE_4__ {scalar_t__ backlight; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct charlcd*,char*) ;
 struct charlcd_priv* FUNC_2 (struct charlcd*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int * VAR_2 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct charlcd *VAR_3)
{
 struct charlcd_priv *VAR_4 = FUNC_2(VAR_3);

 FUNC_5(&VAR_1);
 FUNC_1(VAR_3, "\x0cLCD driver unloaded.\x1b[Lc\x1b[Lb\x1b[L-");
 FUNC_3(&VAR_0);
 VAR_2 = ((void*)0);
 if (VAR_3->ops->backlight) {
  FUNC_0(&VAR_4->bl_work);
  VAR_4->lcd.ops->backlight(&VAR_4->lcd, 0);
 }

 return 0;
}
