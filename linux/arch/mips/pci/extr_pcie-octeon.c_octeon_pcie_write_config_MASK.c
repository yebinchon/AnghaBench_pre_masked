
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; int * parent; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,int,unsigned int,unsigned int,int,int ) ;
 int FUNC_3 (unsigned int,int,unsigned int,unsigned int,int,int ) ;
 int FUNC_4 (unsigned int,int,unsigned int,unsigned int,int,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_5 (char*,unsigned int,int,unsigned int,int,int,int ) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_3, struct pci_bus *VAR_4,
        unsigned int VAR_5, int VAR_6,
        int VAR_7, u32 VAR_8)
{
 int VAR_9 = VAR_4->number;

 FUNC_1(VAR_3 >= FUNC_0(VAR_2));

 if ((VAR_4->parent == ((void*)0)) && (VAR_2[VAR_3]))
  VAR_9 = 0;

 FUNC_5("pcie_cfg_wr port=%d b=%d devfn=0x%03x"
   " reg=0x%03x size=%d val=%08x\n", VAR_3, VAR_9, VAR_5,
   VAR_6, VAR_7, VAR_8);


 switch (VAR_7) {
 case 4:
  FUNC_3(VAR_3, VAR_9, VAR_5 >> 3,
      VAR_5 & 0x7, VAR_6, VAR_8);
  break;
 case 2:
  FUNC_2(VAR_3, VAR_9, VAR_5 >> 3,
      VAR_5 & 0x7, VAR_6, VAR_8);
  break;
 case 1:
  FUNC_4(VAR_3, VAR_9, VAR_5 >> 3,
     VAR_5 & 0x7, VAR_6, VAR_8);
  break;
 default:
  return VAR_0;
 }
 return VAR_1;
}
