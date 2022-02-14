
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int crt; int tv; int panel; } ;
struct TYPE_6__ {TYPE_2__ i2c_indices; } ;
struct TYPE_4__ {scalar_t__ output1_script_ptr; scalar_t__ output0_script_ptr; } ;
struct dcb_table {int dummy; } ;
struct nvbios {TYPE_3__ legacy; TYPE_1__ tmds; struct dcb_table dcb; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dcb_table*,int ,int,int,int) ;
 scalar_t__ FUNC_1 (struct drm_device*,int) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_3, struct nvbios *VAR_4)
{
 struct dcb_table *VAR_5 = &VAR_4->dcb;
 int VAR_6 = (FUNC_2(VAR_3) ? 3 : 1);
 FUNC_0(VAR_5, VAR_0,
        VAR_4->legacy.i2c_indices.crt, 1, 1);

 if (FUNC_1(VAR_3, VAR_4->legacy.i2c_indices.tv) >= 0)
  FUNC_0(VAR_5, VAR_2,
         VAR_4->legacy.i2c_indices.tv,
         VAR_6, 0);

 else if (VAR_4->tmds.output0_script_ptr ||
   VAR_4->tmds.output1_script_ptr)
  FUNC_0(VAR_5, VAR_1,
         VAR_4->legacy.i2c_indices.panel,
         VAR_6, 1);
}
