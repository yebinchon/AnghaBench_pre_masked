
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_smp {int hop_ptr; } ;
struct TYPE_2__ {scalar_t__ process_mad; } ;
struct ib_device {TYPE_1__ ops; } ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_smp*) ;

__attribute__((used)) static inline enum smi_action FUNC_1(struct ib_smp *VAR_2,
         struct ib_device *VAR_3)
{


 return ((VAR_3->ops.process_mad &&
  FUNC_0(VAR_2) &&
  !VAR_2->hop_ptr) ? VAR_1 : VAR_0);
}
