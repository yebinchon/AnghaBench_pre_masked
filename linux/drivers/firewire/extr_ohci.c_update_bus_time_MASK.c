
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int bus_time_running; int bus_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_ohci*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fw_ohci*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(struct fw_ohci *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2) >> 25;

 if (FUNC_4(!VAR_2->bus_time_running)) {
  FUNC_3(VAR_2, VAR_0, VAR_1);
  VAR_2->bus_time = (FUNC_2(FUNC_1()) & ~0x7f) |
                   (VAR_3 & 0x40);
  VAR_2->bus_time_running = 1;
 }

 if ((VAR_2->bus_time & 0x40) != (VAR_3 & 0x40))
  VAR_2->bus_time += 0x40;

 return VAR_2->bus_time | VAR_3;
}
