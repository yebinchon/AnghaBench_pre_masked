
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_4__ {void* features; void* size; } ;
struct rbd_device {TYPE_2__ mapping; TYPE_1__* spec; } ;
struct TYPE_3__ {void* snap_id; } ;


 int FUNC_0 (struct rbd_device*,void*,void**) ;
 int FUNC_1 (struct rbd_device*,void*,void**) ;

__attribute__((used)) static int FUNC_2(struct rbd_device *VAR_0)
{
 u64 VAR_1 = VAR_0->spec->snap_id;
 u64 VAR_2 = 0;
 u64 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_0->mapping.size = VAR_2;
 VAR_0->mapping.features = VAR_3;

 return 0;
}
