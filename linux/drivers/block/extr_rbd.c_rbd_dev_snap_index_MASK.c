
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct ceph_snap_context* snapc; } ;
struct rbd_device {TYPE_1__ header; } ;
struct ceph_snap_context {int * snaps; int num_snaps; } ;
typedef int snap_id ;


 int VAR_0 ;
 int * FUNC_0 (int *,int **,int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct rbd_device *VAR_2, u64 VAR_3)
{
 struct ceph_snap_context *VAR_4 = VAR_2->header.snapc;
 u64 *VAR_5;

 VAR_5 = FUNC_0(&VAR_3, &VAR_4->snaps, VAR_4->num_snaps,
    sizeof (VAR_3), VAR_1);

 return VAR_5 ? (u32)(VAR_5 - &VAR_4->snaps[0]) : VAR_0;
}
