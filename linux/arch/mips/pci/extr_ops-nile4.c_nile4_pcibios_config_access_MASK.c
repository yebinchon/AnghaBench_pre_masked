
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {unsigned char number; } ;


 size_t FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_6(unsigned char VAR_8,
 struct pci_bus *VAR_9, unsigned int VAR_10, int VAR_11, u32 *VAR_12)
{
 unsigned char VAR_13 = VAR_9->number;
 u32 VAR_14, VAR_15, VAR_16;

 if ((VAR_13 == 0) && (FUNC_5(VAR_10) > 8))



  return VAR_3;

 if ((VAR_13 == 0) && (VAR_10 == FUNC_3(0, 0))) {

  if (VAR_8 == VAR_5) {
   VAR_7[(0x200 + VAR_11) >> 2] = *VAR_12;
  } else {
   *VAR_12 = VAR_7[(0x200 + VAR_11) >> 2];
  }
  return VAR_4;
 }


 VAR_15 = VAR_7[FUNC_2(VAR_2)];
 VAR_7[FUNC_2(VAR_2)] = 0x0000001a | (VAR_13 ? 0x200 : 0);



 VAR_7[FUNC_2(VAR_1)] = 0;
 VAR_7[FUNC_0(VAR_1)] = 0;


 if (VAR_13 == 0)
  VAR_14 =
      FUNC_1(VAR_6) +
      ((1 << (FUNC_5(VAR_10) + 15)) | (FUNC_4(VAR_10) << 8)
       | (VAR_11 & ~3));
 else
  VAR_14 = FUNC_1(VAR_6) | (VAR_13 << 16) | (VAR_10 << 8) |
        (VAR_11 & ~3);

 if (VAR_8 == VAR_5)
  *(u32 *) VAR_14 = *VAR_12;
 else
  *VAR_12 = *(u32 *) VAR_14;


 VAR_16 = (VAR_7[FUNC_0(VAR_0)] >> 5) & 0x7;


 VAR_7[FUNC_2(VAR_2)] = VAR_15;

 if (VAR_16)
  return VAR_3;

 return VAR_4;
}
