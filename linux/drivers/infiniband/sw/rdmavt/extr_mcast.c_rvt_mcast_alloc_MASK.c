
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct TYPE_2__ {int lid; union ib_gid mgid; } ;
struct rvt_mcast {int refcount; int wait; int qp_list; TYPE_1__ mcast_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct rvt_mcast* FUNC_3 (int,int ) ;

__attribute__((used)) static struct rvt_mcast *FUNC_4(union ib_gid *VAR_1, u16 VAR_2)
{
 struct rvt_mcast *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto bail;

 VAR_3->mcast_addr.mgid = *VAR_1;
 VAR_3->mcast_addr.lid = VAR_2;

 FUNC_0(&VAR_3->qp_list);
 FUNC_2(&VAR_3->wait);
 FUNC_1(&VAR_3->refcount, 0);

bail:
 return VAR_3;
}
