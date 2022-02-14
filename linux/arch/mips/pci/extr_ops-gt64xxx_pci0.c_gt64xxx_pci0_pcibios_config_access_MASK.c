
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {unsigned char number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 unsigned char VAR_9 ;
 unsigned int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(unsigned char VAR_10,
  struct pci_bus *VAR_11, unsigned int VAR_12, int VAR_13, u32 * VAR_14)
{
 unsigned char VAR_15 = VAR_11->number;
 u32 VAR_16;

 if ((VAR_15 == 0) && (VAR_12 >= FUNC_2(31, 0)))
  return -1;


 FUNC_1(VAR_1, ~(VAR_0 |
         VAR_2));


 FUNC_1(VAR_6,
   (VAR_15 << VAR_3) |
   (VAR_12 << VAR_5) |
   ((VAR_13 / 4) << VAR_7) |
   VAR_4);

 if (VAR_10 == VAR_9) {
  if (VAR_15 == 0 && FUNC_3(VAR_12) == 0) {




   FUNC_1(VAR_8, *VAR_14);
  } else
   FUNC_5(VAR_8, *VAR_14);
 } else {
  if (VAR_15 == 0 && FUNC_3(VAR_12) == 0) {




   *VAR_14 = FUNC_0(VAR_8);
  } else
   *VAR_14 = FUNC_4(VAR_8);
 }


 VAR_16 = FUNC_0(VAR_1);

 if (VAR_16 & (VAR_0 | VAR_2)) {



  FUNC_1(VAR_1, ~(VAR_0 |
          VAR_2));

  return -1;
 }

 return 0;
}
