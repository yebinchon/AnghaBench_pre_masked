
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm5502_muic_info {int irq_attach; int irq_detach; } ;
__attribute__((used)) static int FUNC_0(struct sm5502_muic_info *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 141:
  VAR_0->irq_attach = 1;
  break;
 case 140:
  VAR_0->irq_detach = 1;
  break;
 case 139:
 case 138:
 case 137:
 case 135:
 case 136:
 case 134:
 case 128:
 case 131:
 case 133:
 case 130:
 case 129:
 case 132:
 default:
  break;
 }

 return 0;
}
