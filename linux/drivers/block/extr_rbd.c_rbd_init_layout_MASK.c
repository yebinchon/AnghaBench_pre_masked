
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stripe_unit; int stripe_count; scalar_t__ pool_id; int pool_ns; void* object_size; } ;
struct TYPE_6__ {scalar_t__ stripe_unit; int stripe_count; scalar_t__ data_pool_id; } ;
struct rbd_device {TYPE_2__ layout; TYPE_3__ header; TYPE_1__* spec; } ;
struct TYPE_4__ {scalar_t__ pool_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct rbd_device *VAR_1)
{
 if (VAR_1->header.stripe_unit == 0 ||
     VAR_1->header.stripe_count == 0) {
  VAR_1->header.stripe_unit = FUNC_1(&VAR_1->header);
  VAR_1->header.stripe_count = 1;
 }

 VAR_1->layout.stripe_unit = VAR_1->header.stripe_unit;
 VAR_1->layout.stripe_count = VAR_1->header.stripe_count;
 VAR_1->layout.object_size = FUNC_1(&VAR_1->header);
 VAR_1->layout.pool_id = VAR_1->header.data_pool_id == VAR_0 ?
     VAR_1->spec->pool_id : VAR_1->header.data_pool_id;
 FUNC_0(VAR_1->layout.pool_ns, ((void*)0));
}
