
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_cm_id {scalar_t__ context; } ;
struct iser_device {TYPE_2__* ib_device; } ;
struct ib_conn {int pi_support; struct iser_device* device; } ;
struct iser_conn {scalar_t__ state; struct ib_conn ib_conn; } ;
struct TYPE_3__ {int device_cap_flags; } ;
struct TYPE_4__ {int dev; TYPE_1__ attrs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iser_conn*,int ) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 struct iser_device* FUNC_3 (struct rdma_cm_id*) ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct rdma_cm_id*,int) ;

__attribute__((used)) static void FUNC_7(struct rdma_cm_id *VAR_4)
{
 struct iser_device *VAR_5;
 struct iser_conn *VAR_6;
 struct ib_conn *VAR_7;
 int VAR_8;

 VAR_6 = (struct iser_conn *)VAR_4->context;
 if (VAR_6->state != VAR_1)

  return;

 VAR_7 = &VAR_6->ib_conn;
 VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5) {
  FUNC_4("device lookup/creation failed\n");
  FUNC_2(VAR_4);
  return;
 }

 VAR_7->device = VAR_5;


 if (VAR_3) {
  if (!(VAR_5->ib_device->attrs.device_cap_flags &
        VAR_0)) {
   FUNC_5("T10-PI requested but not supported on %s, "
      "continue without T10-PI\n",
      FUNC_0(&VAR_7->device->ib_device->dev));
   VAR_7->pi_support = 0;
  } else {
   VAR_7->pi_support = 1;
  }
 }

 FUNC_1(VAR_6, VAR_2);

 VAR_8 = FUNC_6(VAR_4, 1000);
 if (VAR_8) {
  FUNC_4("resolve route failed: %d\n", VAR_8);
  FUNC_2(VAR_4);
  return;
 }
}
