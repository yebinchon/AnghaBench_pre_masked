
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int has_key_backlight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_2(void)
{
 if (!VAR_4.has_key_backlight)
  return 0;
 VAR_2 = FUNC_0("applesmc-led");
 if (!VAR_2)
  return -VAR_0;
 return FUNC_1(&VAR_3->dev, &VAR_1);
}
