
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ image_size; } ;
struct rbd_device {TYPE_3__ mapping; int header_rwsem; TYPE_2__ header; TYPE_1__* spec; scalar_t__ parent; } ;
struct TYPE_4__ {scalar_t__ snap_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (struct rbd_device*) ;
 int FUNC_4 (struct rbd_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct rbd_device *VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->header_rwsem);
 VAR_2 = VAR_1->mapping.size;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  goto out;





 if (VAR_1->parent) {
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3)
   goto out;
 }

 if (VAR_1->spec->snap_id == VAR_0) {
  VAR_1->mapping.size = VAR_1->header.image_size;
 } else {

  FUNC_4(VAR_1);
 }

out:
 FUNC_5(&VAR_1->header_rwsem);
 if (!VAR_3 && VAR_2 != VAR_1->mapping.size)
  FUNC_2(VAR_1);

 return VAR_3;
}
