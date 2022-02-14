
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qxl_device {TYPE_2__* primary_bo; } ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {int is_primary; TYPE_1__ tbo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qxl_device*,int ,int ) ;

void FUNC_2(struct qxl_device *VAR_1)
{
 FUNC_1(VAR_1, 0, VAR_0);
 VAR_1->primary_bo->is_primary = 0;
 FUNC_0(&VAR_1->primary_bo->tbo.base);
 VAR_1->primary_bo = ((void*)0);
}
