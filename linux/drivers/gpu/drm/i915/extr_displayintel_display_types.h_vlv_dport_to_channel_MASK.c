
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static inline enum dpio_channel
FUNC_1(struct intel_digital_port *VAR_2)
{
 switch (VAR_2->base.port) {
 case 130:
 case 128:
  return VAR_0;
 case 129:
  return VAR_1;
 default:
  FUNC_0();
 }
}
