
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {int object_map_flags; int header_oloc; int header_oid; TYPE_1__* spec; } ;
typedef int snapid ;
typedef int flags ;
typedef int __le64 ;
struct TYPE_2__ {int snap_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rbd_device*,int *,int *,char*,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct rbd_device *VAR_1)
{
 __le64 VAR_2 = FUNC_0(VAR_1->spec->snap_id);
 __le64 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_1->header_oid,
      &VAR_1->header_oloc, "get_flags",
      &VAR_2, sizeof(VAR_2),
      &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 < sizeof(VAR_3))
  return -VAR_0;

 VAR_1->object_map_flags = FUNC_1(VAR_3);
 return 0;
}
