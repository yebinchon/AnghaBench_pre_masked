
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nlm_soc_info {unsigned int coremask; int sysbase; } ;
typedef int cpumask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 struct nlm_soc_info* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int,int) ;

__attribute__((used)) static void FUNC_16(const cpumask_t *VAR_5)
{
 struct nlm_soc_info *VAR_6;
 uint64_t VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (VAR_13 != 0) {

   if (FUNC_0()) {
    int VAR_16 = FUNC_14(VAR_13);
    FUNC_11("Node %d SoC PCI bus %d.\n", VAR_13, VAR_16);
    if (VAR_16 == 0)
     break;
   } else {
    VAR_7 = FUNC_6(VAR_13);
    if (FUNC_8(VAR_7, 0) == 0xffffffff)
     break;
   }
   FUNC_7(VAR_13);
  }


  VAR_6 = FUNC_5(VAR_13);

  if (FUNC_0()) {
   VAR_8 = FUNC_4(VAR_13);
   VAR_11 = FUNC_8(VAR_8, VAR_0);
   switch (FUNC_12() & VAR_3) {
   case 130:
    VAR_10 = 0xff;
    break;
   case 128:
   default:
    VAR_10 = 0xfffff;
    break;
   }
  } else {
   VAR_11 = FUNC_9(VAR_6->sysbase,
      VAR_4);
   switch (FUNC_12() & VAR_3) {
   case 131:
    VAR_10 = 0xf;
    break;
   case 132:
    VAR_10 = 0x3;
    break;
   case 129:
   default:
    VAR_10 = 0xff;
    break;
   }
  }





  VAR_9 = (1 << FUNC_2(~VAR_11 & VAR_10)) - 1;

  FUNC_11("Node %d - SYS/FUSE coremask %x\n", VAR_13, VAR_9);
  VAR_15 = FUNC_3();
  for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {

   if (VAR_13 == 0 && VAR_12 == 0)
    continue;


   if ((VAR_9 & (1 << VAR_12)) == 0)
    continue;


   VAR_14 = (VAR_13 * VAR_15 + VAR_12) * VAR_2;
   if (!FUNC_1(VAR_14, VAR_5))
    continue;


   if (!FUNC_15(VAR_6->sysbase, VAR_13, VAR_12))
    continue;


   VAR_6->coremask |= 1u << VAR_12;


   if (!FUNC_13(VAR_14, 0))
    FUNC_10("Node %d : timeout core %d\n", VAR_13, VAR_12);
  }
 }
}
