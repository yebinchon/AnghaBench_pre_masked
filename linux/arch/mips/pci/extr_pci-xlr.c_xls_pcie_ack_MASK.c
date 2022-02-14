
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct irq_data {int irq; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 uint64_t VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1->irq) {
 case 131:
  FUNC_1(VAR_2, (0x90 >> 2), 0xffffffff);
  break;
 case 130:
  FUNC_1(VAR_2, (0x94 >> 2), 0xffffffff);
  break;
 case 129:
  FUNC_1(VAR_2, (0x190 >> 2), 0xffffffff);
  break;
 case 128:
  FUNC_1(VAR_2, (0x194 >> 2), 0xffffffff);
  break;
 }
}
