
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_2__ {char* snap_names; struct ceph_snap_context* snapc; } ;
struct rbd_device {TYPE_1__ header; } ;
struct ceph_snap_context {size_t num_snaps; int * snaps; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static u64 FUNC_2(struct rbd_device *VAR_1, const char *VAR_2)
{
 struct ceph_snap_context *VAR_3 = VAR_1->header.snapc;
 const char *VAR_4;
 u32 VAR_5 = 0;



 VAR_4 = VAR_1->header.snap_names;
 while (VAR_5 < VAR_3->num_snaps) {
  if (!FUNC_0(VAR_2, VAR_4))
   return VAR_3->snaps[VAR_5];
  VAR_4 += FUNC_1(VAR_4) + 1;
  VAR_5++;
 }
 return VAR_0;
}
