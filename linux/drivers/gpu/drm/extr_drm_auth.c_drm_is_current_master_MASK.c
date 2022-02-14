
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {TYPE_2__* minor; int master; scalar_t__ is_master; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ master; } ;


 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(struct drm_file *VAR_0)
{
 return VAR_0->is_master && FUNC_0(VAR_0->master) == VAR_0->minor->dev->master;
}
