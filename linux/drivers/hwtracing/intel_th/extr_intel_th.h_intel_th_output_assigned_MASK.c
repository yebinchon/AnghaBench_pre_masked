
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; scalar_t__ type; } ;
struct intel_th_device {scalar_t__ type; TYPE_1__ output; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct intel_th_device *VAR_2)
{
 return VAR_2->type == VAR_1 &&
  (VAR_2->output.port >= 0 ||
   VAR_2->output.type == VAR_0);
}
