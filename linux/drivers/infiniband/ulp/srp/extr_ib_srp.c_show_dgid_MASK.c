
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct srp_target_port {scalar_t__ using_rdma_cm; struct srp_rdma_ch* ch; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {TYPE_1__ dgid; } ;
struct TYPE_6__ {TYPE_2__ path; } ;
struct srp_rdma_ch {TYPE_3__ ib_cm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct srp_target_port* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct srp_target_port *VAR_4 = FUNC_1(FUNC_0(VAR_1));
 struct srp_rdma_ch *VAR_5 = &VAR_4->ch[0];

 if (VAR_4->using_rdma_cm)
  return -VAR_0;
 return FUNC_2(VAR_3, "%pI6\n", VAR_5->ib_cm.path.dgid.raw);
}
