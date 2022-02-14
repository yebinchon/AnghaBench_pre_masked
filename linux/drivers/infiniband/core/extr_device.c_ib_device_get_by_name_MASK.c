
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver_id; } ;
struct ib_device {TYPE_1__ ops; } ;
typedef enum rdma_driver_id { ____Placeholder_rdma_driver_id } rdma_driver_id ;


 int VAR_0 ;
 struct ib_device* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int *) ;

struct ib_device *FUNC_4(const char *VAR_2,
     enum rdma_driver_id VAR_3)
{
 struct ib_device *VAR_4;

 FUNC_1(&VAR_1);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 && VAR_3 != VAR_0 &&
     VAR_4->ops.driver_id != VAR_3)
  VAR_4 = ((void*)0);

 if (VAR_4) {
  if (!FUNC_2(VAR_4))
   VAR_4 = ((void*)0);
 }
 FUNC_3(&VAR_1);
 return VAR_4;
}
