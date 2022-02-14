
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {scalar_t__ gtt_phys_addr; int registers; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 phys_addr_t VAR_4;

 VAR_4 = FUNC_2(VAR_3.pcidev, VAR_1);

 VAR_3.registers = FUNC_1(VAR_4, FUNC_0(64));
 if (!VAR_3.registers)
  return -VAR_0;

 VAR_3.gtt_phys_addr = VAR_4 + VAR_2;

 return 0;
}
