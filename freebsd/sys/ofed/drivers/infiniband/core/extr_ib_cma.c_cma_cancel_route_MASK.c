
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_num; int device; } ;
struct rdma_id_private {scalar_t__ query; int query_id; TYPE_1__ id; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rdma_id_private *VAR_0)
{
 if (FUNC_1(VAR_0->id.device, VAR_0->id.port_num)) {
  if (VAR_0->query)
   FUNC_0(VAR_0->query_id, VAR_0->query);
 }
}
