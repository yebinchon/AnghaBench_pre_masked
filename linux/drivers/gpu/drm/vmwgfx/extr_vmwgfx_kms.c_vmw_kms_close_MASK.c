
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ active_display_unit; int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vmw_private*) ;

int FUNC_2(struct vmw_private *VAR_1)
{
 int VAR_2 = 0;






 FUNC_0(VAR_1->dev);
 if (VAR_1->active_display_unit == VAR_0)
  VAR_2 = FUNC_1(VAR_1);

 return VAR_2;
}
