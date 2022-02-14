
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_console_data {int (* open ) () ;} ;
struct TYPE_2__ {struct serial_console_data* data; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void)
{
 struct serial_console_data *VAR_1 = VAR_0.data;
 return VAR_1->open();
}
