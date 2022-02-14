
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isert_device {int pi_capable; int pd; struct ib_device* ib_device; } ;
struct TYPE_2__ {int device_cap_flags; int max_sge_rd; int max_recv_sge; int max_send_sge; } ;
struct ib_device {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct isert_device*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,struct isert_device*,int) ;
 int FUNC_6 (struct isert_device*) ;

__attribute__((used)) static int
FUNC_7(struct isert_device *VAR_2)
{
 struct ib_device *VAR_3 = VAR_2->ib_device;
 int VAR_4;

 FUNC_4("devattr->max_send_sge: %d devattr->max_recv_sge %d\n",
    VAR_3->attrs.max_send_sge, VAR_3->attrs.max_recv_sge);
 FUNC_4("devattr->max_sge_rd: %d\n", VAR_3->attrs.max_sge_rd);

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto out;

 VAR_2->pd = FUNC_2(VAR_3, 0);
 if (FUNC_0(VAR_2->pd)) {
  VAR_4 = FUNC_1(VAR_2->pd);
  FUNC_5("failed to allocate pd, device %p, ret=%d\n",
     VAR_2, VAR_4);
  goto out_cq;
 }


 VAR_2->pi_capable = VAR_3->attrs.device_cap_flags &
        VAR_1 ? 1 : 0;

 return 0;

out_cq:
 FUNC_6(VAR_2);
out:
 if (VAR_4 > 0)
  VAR_4 = -VAR_0;
 return VAR_4;
}
