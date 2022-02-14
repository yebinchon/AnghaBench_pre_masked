
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_cli {int mutex; } ;
struct TYPE_3__ {scalar_t__ client; } ;
struct TYPE_4__ {TYPE_1__ object; } ;
struct nouveau_abi16 {TYPE_2__ device; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct nouveau_abi16 *VAR_0, int VAR_1)
{
 struct nouveau_cli *VAR_2 = (void *)VAR_0->device.object.client;
 FUNC_0(&VAR_2->mutex);
 return VAR_1;
}
