
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_2__ {struct ceph_snap_context* snapc; } ;
struct rbd_device {TYPE_1__ header; } ;
struct ceph_snap_context {size_t num_snaps; int * snaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (struct rbd_device*,int ) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static u64 FUNC_5(struct rbd_device *VAR_2, const char *VAR_3)
{
 struct ceph_snap_context *VAR_4 = VAR_2->header.snapc;
 u32 VAR_5;
 bool VAR_6 = 0;
 u64 VAR_7;

 for (VAR_5 = 0; !VAR_6 && VAR_5 < VAR_4->num_snaps; VAR_5++) {
  const char *VAR_8;

  VAR_7 = VAR_4->snaps[VAR_5];
  VAR_8 = FUNC_3(VAR_2, VAR_7);
  if (FUNC_0(VAR_8)) {

   if (FUNC_1(VAR_8) == -VAR_1)
    continue;
   else
    break;
  }
  VAR_6 = !FUNC_4(VAR_3, VAR_8);
  FUNC_2(VAR_8);
 }
 return VAR_6 ? VAR_7 : VAR_0;
}
