
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {struct ib_cm_id* ib; } ;
struct TYPE_4__ {int device; } ;
struct rdma_id_private {TYPE_1__ cm_id; TYPE_2__ id; } ;
struct ib_cm_id {int dummy; } ;
typedef int __be64 ;


 scalar_t__ FUNC_0 (struct ib_cm_id*) ;
 int FUNC_1 (struct ib_cm_id*) ;
 int VAR_0 ;
 struct sockaddr* FUNC_2 (struct rdma_id_private*) ;
 struct ib_cm_id* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_5(struct rdma_id_private *VAR_1)
{
 struct sockaddr *VAR_2;
 struct ib_cm_id *VAR_3;
 __be64 VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 VAR_4 = FUNC_4(&VAR_1->id, VAR_2);
 VAR_3 = FUNC_3(VAR_1->id.device, VAR_0, VAR_4);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 VAR_1->cm_id.ib = VAR_3;

 return 0;
}
