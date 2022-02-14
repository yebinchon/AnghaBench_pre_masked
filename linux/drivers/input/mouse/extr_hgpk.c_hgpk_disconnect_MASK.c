
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* serio; } ;
struct psmouse {scalar_t__ model; TYPE_2__ ps2dev; struct hgpk_data* private; } ;
struct hgpk_data {int dummy; } ;
struct TYPE_10__ {int dattr; } ;
struct TYPE_9__ {int dattr; } ;
struct TYPE_8__ {int dattr; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hgpk_data*) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (struct psmouse*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_4)
{
 struct hgpk_data *VAR_5 = VAR_4->private;

 FUNC_0(&VAR_4->ps2dev.serio->dev,
      &VAR_2.dattr);
 FUNC_0(&VAR_4->ps2dev.serio->dev,
      &VAR_1.dattr);

 if (VAR_4->model >= VAR_0)
  FUNC_0(&VAR_4->ps2dev.serio->dev,
       &VAR_3.dattr);

 FUNC_2(VAR_4);
 FUNC_1(VAR_5);
}
