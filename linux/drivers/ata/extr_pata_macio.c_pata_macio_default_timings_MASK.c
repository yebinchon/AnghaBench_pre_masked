
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_macio_priv {int kind; unsigned int** treg; } ;
__attribute__((used)) static void FUNC_0(struct pata_macio_priv *VAR_0)
{
 unsigned int VAR_1, VAR_2 = 0;

 switch(VAR_0->kind) {
  case 129:
   VAR_1 = 0x0a820c97;
   VAR_2 = 0x00033031;
   break;
  case 128:
  case 133:
   VAR_1 = 0x08618a92;
   VAR_2 = 0x00002921;
   break;
  case 131:
   VAR_1 = 0x0008438c;
   break;
  case 132:
   VAR_1 = 0x00084526;
   break;
  case 134:
  case 130:
  default:
   VAR_1 = 0x00074526;
   break;
 }
 VAR_0->treg[0][0] = VAR_0->treg[1][0] = VAR_1;
 VAR_0->treg[0][1] = VAR_0->treg[1][1] = VAR_2;
}
