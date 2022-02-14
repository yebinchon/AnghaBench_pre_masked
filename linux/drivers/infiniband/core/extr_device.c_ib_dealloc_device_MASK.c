
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* dealloc_driver ) (struct ib_device*) ;} ;
struct ib_device {int dev; int refcount; int client_data; int compat_devs; int index; TYPE_1__ ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ib_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct ib_device* FUNC_10 (int *,int ) ;

void FUNC_11(struct ib_device *VAR_2)
{
 if (VAR_2->ops.dealloc_driver)
  VAR_2->ops.dealloc_driver(VAR_2);







 FUNC_1(&VAR_1);
 if (FUNC_10(&VAR_0, VAR_2->index) == VAR_2)
  FUNC_9(&VAR_0, VAR_2->index);
 FUNC_7(&VAR_1);


 FUNC_2(VAR_2);

 FUNC_0(!FUNC_8(&VAR_2->compat_devs));
 FUNC_0(!FUNC_8(&VAR_2->client_data));
 FUNC_0(FUNC_5(&VAR_2->refcount));
 FUNC_4(VAR_2);

 FUNC_3(&VAR_2->dev);
}
