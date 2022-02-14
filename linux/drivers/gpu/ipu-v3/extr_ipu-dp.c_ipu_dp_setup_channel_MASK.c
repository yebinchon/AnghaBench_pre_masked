
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_cs; } ;
struct TYPE_3__ {scalar_t__ in_cs; } ;
struct ipu_flow {int out_cs; TYPE_2__ foreground; TYPE_1__ background; struct ipu_dp_priv* priv; } ;
struct ipu_dp_priv {int mutex; int ipu; } ;
struct ipu_dp {int in_cs; int foreground; } ;
typedef enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ipu_flow*,scalar_t__,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ipu_flow* FUNC_4 (struct ipu_dp*) ;

int FUNC_5(struct ipu_dp *VAR_4,
  enum ipu_color_space VAR_5,
  enum ipu_color_space VAR_6)
{
 struct ipu_flow *VAR_7 = FUNC_4(VAR_4);
 struct ipu_dp_priv *VAR_8 = VAR_7->priv;

 FUNC_2(&VAR_8->mutex);

 VAR_4->in_cs = VAR_5;

 if (!VAR_4->foreground)
  VAR_7->out_cs = VAR_6;

 if (VAR_7->foreground.in_cs == VAR_7->background.in_cs) {




  FUNC_0(VAR_7, VAR_7->foreground.in_cs, VAR_7->out_cs,
    VAR_1);
 } else {
  if (VAR_7->foreground.in_cs == VAR_3 ||
      VAR_7->foreground.in_cs == VAR_7->out_cs)




   FUNC_0(VAR_7, VAR_7->background.in_cs,
     VAR_7->out_cs, VAR_0);
  else
   FUNC_0(VAR_7, VAR_7->foreground.in_cs,
     VAR_7->out_cs, VAR_2);
 }

 FUNC_1(VAR_8->ipu, 1);

 FUNC_3(&VAR_8->mutex);

 return 0;
}
