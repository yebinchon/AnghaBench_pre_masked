
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ctl_addr; } ;
struct ide_hw {unsigned long* io_ports_array; TYPE_1__ io_ports; } ;



__attribute__((used)) static void FUNC_0(struct ide_hw *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; ++VAR_2)
  VAR_0->io_ports_array[VAR_2] = VAR_1 + VAR_2 * 0x10;

 VAR_0->io_ports.ctl_addr = VAR_1 + 0x160;
}
