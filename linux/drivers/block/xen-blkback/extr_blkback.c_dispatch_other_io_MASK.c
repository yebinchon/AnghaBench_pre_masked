
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xen_blkif_ring {int dummy; } ;
struct pending_req {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ other; } ;
struct blkif_request {int operation; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xen_blkif_ring*,struct pending_req*) ;
 int FUNC_1 (struct xen_blkif_ring*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct xen_blkif_ring *VAR_2,
        struct blkif_request *VAR_3,
        struct pending_req *VAR_4)
{
 FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_3->u.other.id, VAR_3->operation,
        VAR_0);
 return -VAR_1;
}
