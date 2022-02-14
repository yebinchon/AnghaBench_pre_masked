
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oe_off; } ;
struct rbd_obj_request {TYPE_1__ ex; } ;
struct ceph_osd_request {int r_data_offset; int r_mtime; int r_flags; struct rbd_obj_request* r_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ceph_osd_request *VAR_1)
{
 struct rbd_obj_request *VAR_2 = VAR_1->r_priv;

 VAR_1->r_flags = VAR_0;
 FUNC_0(&VAR_1->r_mtime);
 VAR_1->r_data_offset = VAR_2->ex.oe_off;
}
