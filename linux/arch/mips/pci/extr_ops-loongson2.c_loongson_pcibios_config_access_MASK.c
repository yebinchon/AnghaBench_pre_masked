
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,void*) ;

__attribute__((used)) static int FUNC_10(unsigned char VAR_8,
          struct pci_bus *VAR_9,
          unsigned int VAR_10, int VAR_11,
          u32 *VAR_12)
{
 u32 VAR_13 = VAR_9->number;
 u32 VAR_14, VAR_15;
 u32 VAR_16;
 void *VAR_17;
 int VAR_18 = FUNC_2(VAR_10);
 int VAR_19 = FUNC_1(VAR_10);
 int VAR_20 = VAR_11 & ~3;

 if (VAR_13 == 0) {
  if (VAR_18 > VAR_5)
   return -1;

  VAR_14 = (1 << (VAR_18 + VAR_0)) | (VAR_19 << 8) | VAR_20;
  VAR_15 = 0;
 } else {

  VAR_14 = (VAR_13 << 16) | (VAR_18 << 11) | (VAR_19 << 8) | VAR_20;
  VAR_15 = 0x10000;
 }


 VAR_1 |= VAR_2 | VAR_3;


 VAR_4 = (VAR_14 >> 16) | VAR_15;


 VAR_16 = VAR_4;
 FUNC_7();

 VAR_17 = FUNC_0(VAR_14 & 0xffff);
 if (VAR_8 == 128)
  FUNC_9(FUNC_3(*VAR_12), VAR_17);
 else
  *VAR_12 = FUNC_6(FUNC_8(VAR_17));


 if (VAR_1 & (VAR_2 |
        VAR_3)) {



  VAR_1 |= (VAR_2 |
      VAR_3);

  return -1;
 }

 return 0;

}
