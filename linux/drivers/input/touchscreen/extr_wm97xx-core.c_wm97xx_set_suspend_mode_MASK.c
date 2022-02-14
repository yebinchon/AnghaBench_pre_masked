
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wm97xx {TYPE_1__* input_dev; scalar_t__ suspend_mode; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(struct wm97xx *VAR_0, u16 VAR_1)
{
 VAR_0->suspend_mode = VAR_1;
 FUNC_0(&VAR_0->input_dev->dev, VAR_1 != 0);
}
