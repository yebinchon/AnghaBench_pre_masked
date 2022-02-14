
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isert_device {scalar_t__ pi_capable; } ;
struct isert_conn {int pi_support; struct isert_device* device; } ;
struct iscsi_conn {TYPE_2__* tpg; struct isert_conn* context; } ;
typedef enum target_prot_op { ____Placeholder_target_prot_op } target_prot_op ;
struct TYPE_3__ {scalar_t__ t10_pi; } ;
struct TYPE_4__ {TYPE_1__ tpg_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct isert_conn*) ;

__attribute__((used)) static enum target_prot_op
FUNC_1(struct iscsi_conn *VAR_2)
{
 struct isert_conn *VAR_3 = VAR_2->context;
 struct isert_device *VAR_4 = VAR_3->device;

 if (VAR_2->tpg->tpg_attrib.t10_pi) {
  if (VAR_4->pi_capable) {
   FUNC_0("conn %p PI offload enabled\n", VAR_3);
   VAR_3->pi_support = 1;
   return VAR_0;
  }
 }

 FUNC_0("conn %p PI offload disabled\n", VAR_3);
 VAR_3->pi_support = 0;

 return VAR_1;
}
