
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int service_id; } ;
struct srp_target_port {TYPE_1__ ib_cm; scalar_t__ using_rdma_cm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct srp_target_port* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct srp_target_port *VAR_4 = FUNC_2(FUNC_1(VAR_1));

 if (VAR_4->using_rdma_cm)
  return -VAR_0;
 return FUNC_3(VAR_3, "0x%016llx\n",
         FUNC_0(VAR_4->ib_cm.service_id));
}
