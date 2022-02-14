
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* atom_card_info; TYPE_2__* atom_context; } ;
struct amdgpu_device {int dev; TYPE_1__ mode_info; } ;
struct TYPE_4__ {struct TYPE_4__* iio; struct TYPE_4__* scratch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct amdgpu_device *VAR_1)
{
 if (VAR_1->mode_info.atom_context) {
  FUNC_1(VAR_1->mode_info.atom_context->scratch);
  FUNC_1(VAR_1->mode_info.atom_context->iio);
 }
 FUNC_1(VAR_1->mode_info.atom_context);
 VAR_1->mode_info.atom_context = ((void*)0);
 FUNC_1(VAR_1->mode_info.atom_card_info);
 VAR_1->mode_info.atom_card_info = ((void*)0);
 FUNC_0(VAR_1->dev, &VAR_0);
}
