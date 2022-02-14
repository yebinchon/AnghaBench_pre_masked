
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {TYPE_1__ orig_dgid; } ;
struct srp_target_port {TYPE_2__ ib_cm; scalar_t__ using_rdma_cm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct srp_target_port* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct srp_target_port *VAR_4 = FUNC_1(FUNC_0(VAR_1));

 if (VAR_4->using_rdma_cm)
  return -VAR_0;
 return FUNC_2(VAR_3, "%pI6\n", VAR_4->ib_cm.orig_dgid.raw);
}
