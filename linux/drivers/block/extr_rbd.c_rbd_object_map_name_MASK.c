
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rbd_device {TYPE_1__* spec; } ;
struct ceph_object_id {int dummy; } ;
struct TYPE_2__ {int image_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_object_id*,char*,int ,int ,...) ;

__attribute__((used)) static void FUNC_1(struct rbd_device *VAR_2, u64 VAR_3,
    struct ceph_object_id *VAR_4)
{
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_4, "%s%s", VAR_1,
    VAR_2->spec->image_id);
 else
  FUNC_0(VAR_4, "%s%s.%016llx", VAR_1,
    VAR_2->spec->image_id, VAR_3);
}
