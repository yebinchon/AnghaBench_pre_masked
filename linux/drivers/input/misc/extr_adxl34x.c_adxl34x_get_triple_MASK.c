
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct axis_triple {void* z; void* y; void* x; } ;
struct TYPE_4__ {void* z; void* y; void* x; } ;
struct adxl34x {int mutex; TYPE_2__ saved; int dev; TYPE_1__* bops; } ;
typedef void* s16 ;
struct TYPE_3__ {int (* read_block ) (int ,scalar_t__,scalar_t__,short*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (short) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,short*) ;

__attribute__((used)) static void FUNC_4(struct adxl34x *VAR_2, struct axis_triple *VAR_3)
{
 short VAR_4[3];

 VAR_2->bops->read_block(VAR_2->dev, VAR_0, VAR_1 - VAR_0 + 1, VAR_4);

 FUNC_1(&VAR_2->mutex);
 VAR_2->saved.x = (s16) FUNC_0(VAR_4[0]);
 VAR_3->x = VAR_2->saved.x;

 VAR_2->saved.y = (s16) FUNC_0(VAR_4[1]);
 VAR_3->y = VAR_2->saved.y;

 VAR_2->saved.z = (s16) FUNC_0(VAR_4[2]);
 VAR_3->z = VAR_2->saved.z;
 FUNC_2(&VAR_2->mutex);
}
