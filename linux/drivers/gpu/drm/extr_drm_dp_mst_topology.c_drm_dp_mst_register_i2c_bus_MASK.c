
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; TYPE_3__* parent; } ;
struct TYPE_5__ {int retries; int name; TYPE_1__ dev; int owner; int class; struct drm_dp_aux* algo_data; int * algo; } ;
struct drm_dp_aux {TYPE_2__ ddc; TYPE_3__* dev; scalar_t__ name; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct drm_dp_aux *VAR_3)
{
 VAR_3->ddc.algo = &VAR_2;
 VAR_3->ddc.algo_data = VAR_3;
 VAR_3->ddc.retries = 3;

 VAR_3->ddc.class = VAR_0;
 VAR_3->ddc.owner = VAR_1;
 VAR_3->ddc.dev.parent = VAR_3->dev;
 VAR_3->ddc.dev.of_node = VAR_3->dev->of_node;

 FUNC_2(VAR_3->ddc.name, VAR_3->name ? VAR_3->name : FUNC_0(VAR_3->dev),
  sizeof(VAR_3->ddc.name));

 return FUNC_1(&VAR_3->ddc);
}
