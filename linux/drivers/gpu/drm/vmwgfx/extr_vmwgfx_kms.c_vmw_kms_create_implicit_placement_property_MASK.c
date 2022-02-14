
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int dev; scalar_t__ implicit_placement_property; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int ,int) ;

void
FUNC_1(struct vmw_private *VAR_1)
{
 if (VAR_1->implicit_placement_property)
  return;

 VAR_1->implicit_placement_property =
  FUNC_0(VAR_1->dev,
       VAR_0,
       "implicit_placement", 0, 1);
}
