
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physdev_apic {unsigned int reg; unsigned int value; int apic_physbase; } ;


 int FUNC_0 (int ,struct physdev_apic*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned VAR_1, unsigned VAR_2)
{
 struct physdev_apic VAR_3;
 int VAR_4;

 VAR_3.apic_physbase = FUNC_1(VAR_1);
 VAR_3.reg = VAR_2;
 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (!VAR_4)
  return VAR_3.value;


 if (VAR_2 == 0x1)
  return 0x00170020;
 else if (VAR_2 == 0x0)
  return VAR_1 << 24;

 return 0xfd;
}
