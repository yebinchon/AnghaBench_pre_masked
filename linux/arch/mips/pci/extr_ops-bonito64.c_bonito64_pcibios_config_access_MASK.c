
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,void*) ;

__attribute__((used)) static int FUNC_8(unsigned char VAR_8,
          struct pci_bus *VAR_9,
          unsigned int VAR_10, int VAR_11,
          u32 * VAR_12)
{
 u32 VAR_13 = VAR_9->number;
 u32 VAR_14, VAR_15;
 u32 VAR_16;
 void *VAR_17;
 int VAR_18 = FUNC_2(VAR_10);
 int VAR_19 = FUNC_1(VAR_10);
 int VAR_20 = VAR_11 & ~3;

 if (VAR_13 == 0) {

  if (VAR_18 > VAR_6)
   return -1;

  VAR_14 = (1 << (VAR_18 + VAR_5)) | (VAR_19 << 8) | VAR_20;
  VAR_15 = 0;
 } else {

  VAR_14 = (VAR_13 << 16) | (VAR_18 << 11) | (VAR_19 << 8) | VAR_20;
  VAR_15 = 0x10000;
 }


 VAR_0 |= VAR_1 | VAR_2;

 VAR_3 = (VAR_14 >> 16) | VAR_15;


 VAR_16 = VAR_3;
 FUNC_5();

 VAR_17 = FUNC_0(VAR_14 & 0xffff);
 if (VAR_8 == VAR_7) {
  FUNC_7(FUNC_3(*VAR_12), VAR_17);

  while (VAR_4 & 0xF);
 } else {
  *VAR_12 = FUNC_4(FUNC_6(VAR_17));
 }


 if (VAR_0 & (VAR_1 |
        VAR_2)) {



  VAR_0 |= (VAR_1 |
      VAR_2);

  return -1;
 }

 return 0;

}
