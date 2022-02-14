
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ si_type; } ;
struct ipmi_device_id {scalar_t__ manufacturer_id; } ;
struct smi_info {TYPE_1__ io; struct ipmi_device_id device_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct smi_info *VAR_3)
{
 struct ipmi_device_id *VAR_4 = &VAR_3->device_id;
 if (VAR_4->manufacturer_id == VAR_0 &&
     VAR_3->io.si_type == VAR_1)
  FUNC_0(&VAR_2);
}
