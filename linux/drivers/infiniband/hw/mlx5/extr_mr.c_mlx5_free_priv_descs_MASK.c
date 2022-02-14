
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ib_device* device; } ;
struct mlx5_ib_mr {int max_descs; int desc_size; int * descs; int descs_alloc; int desc_map; TYPE_1__ ibmr; } ;
struct TYPE_4__ {int parent; } ;
struct ib_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mlx5_ib_mr *VAR_1)
{
 if (VAR_1->descs) {
  struct ib_device *VAR_2 = VAR_1->ibmr.device;
  int VAR_3 = VAR_1->max_descs * VAR_1->desc_size;

  FUNC_0(VAR_2->dev.parent, VAR_1->desc_map,
     VAR_3, VAR_0);
  FUNC_1(VAR_1->descs_alloc);
  VAR_1->descs = ((void*)0);
 }
}
