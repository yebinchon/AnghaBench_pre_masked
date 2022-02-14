
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t port_num; } ;
struct rdma_id_private {TYPE_1__ id; int gid_type; } ;
struct cma_device {int device; int * default_gid_type; } ;


 int FUNC_0 (struct rdma_id_private*,struct cma_device*) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rdma_id_private *VAR_0,
         struct cma_device *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_0->gid_type =
  VAR_1->default_gid_type[VAR_0->id.port_num -
       FUNC_1(VAR_1->device)];
}
