
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_0(void)
{
 if ((VAR_4->dev->device == VAR_0) ||
     (VAR_4->dev->device == VAR_1) ||
     (VAR_4->dev->device == VAR_2) ||
     (VAR_4->dev->device == VAR_3))
  return 1;
 return 0;
}
