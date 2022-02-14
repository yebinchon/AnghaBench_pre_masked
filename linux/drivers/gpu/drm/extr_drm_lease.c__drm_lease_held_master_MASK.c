
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_master {int leases; scalar_t__ lessor; TYPE_2__* dev; } ;
struct TYPE_3__ {int idr_mutex; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct drm_master *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->dev->mode_config.idr_mutex);
 if (VAR_0->lessor)
  return FUNC_0(&VAR_0->leases, VAR_1) != ((void*)0);
 return 1;
}
