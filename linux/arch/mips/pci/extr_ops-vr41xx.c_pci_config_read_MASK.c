
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_4, unsigned int VAR_5, int VAR_6,
      int VAR_7, uint32_t *VAR_8)
{
 uint32_t VAR_9;

 *VAR_8 = 0xffffffffU;
 if (FUNC_1(VAR_4->number, VAR_5, VAR_6) < 0)
  return VAR_0;

 VAR_9 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 1:
  *VAR_8 = (VAR_9 >> ((VAR_6 & 3) << 3)) & 0xffU;
  break;
 case 2:
  *VAR_8 = (VAR_9 >> ((VAR_6 & 2) << 3)) & 0xffffU;
  break;
 case 4:
  *VAR_8 = VAR_9;
  break;
 default:
  return VAR_1;
 }

 return VAR_2;
}
