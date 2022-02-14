
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int apic_id; int xen_cpuid; } ;
struct TYPE_3__ {TYPE_2__ pcpu_info; } ;
struct xen_platform_op {TYPE_1__ u; int interface_version; int cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xen_platform_op*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static u32 FUNC_4(u32 VAR_6)
{
 struct xen_platform_op VAR_7 = {
  .cmd = VAR_5,
  .interface_version = VAR_4,
  .u.pcpu_info.xen_cpuid = 0,
 };
 int VAR_8 = 0;



 if (!FUNC_3() || FUNC_2())
  return 0;

 if (VAR_6 == VAR_2)
  return 0x14;




 if (VAR_6 != VAR_0)
  return 0;

 VAR_8 = FUNC_0(&VAR_7);
 if (VAR_8)
  VAR_7.u.pcpu_info.apic_id = VAR_3;

 return VAR_7.u.pcpu_info.apic_id << 24;
}
