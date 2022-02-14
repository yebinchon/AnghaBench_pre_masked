
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynq_gpio {TYPE_1__* p_data; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct zynq_gpio *VAR_1)
{
 return !!(VAR_1->p_data->quirks & VAR_0);
}
