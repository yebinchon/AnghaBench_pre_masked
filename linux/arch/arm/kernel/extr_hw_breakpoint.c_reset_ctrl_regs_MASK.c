
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int,int ) ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_14 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (scalar_t__,unsigned long) ;

__attribute__((used)) static void FUNC_10(unsigned int VAR_15)
{
 int VAR_16, VAR_17, VAR_18 = 0;
 u32 VAR_19;
 switch (VAR_12) {
 case 131:
 case 130:

  goto out_mdbgen;
 case 128:




  FUNC_0(VAR_7, VAR_9, 4, VAR_19);
  if ((VAR_19 & 0x1) == 0)
   VAR_18 = -VAR_5;

  if (!VAR_14)
   goto clear_vcr;
  break;
 case 129:



  FUNC_0(VAR_7, VAR_8, 4, VAR_19);
  if ((VAR_19 & 0x1) == 1)
   VAR_18 = -VAR_5;
  break;
 }

 if (VAR_18) {
  FUNC_8("CPU %d debug is powered down!\n", VAR_15);
  FUNC_4(&VAR_13, &VAR_13, FUNC_3(VAR_15));
  return;
 }





 FUNC_1(VAR_7, VAR_6, 4, ~VAR_4);
 FUNC_7();





clear_vcr:
 FUNC_1(VAR_6, VAR_10, 0, 0);
 FUNC_7();

 if (FUNC_2(&VAR_13, FUNC_3(VAR_15))) {
  FUNC_8("CPU %d failed to disable vector catch\n", VAR_15);
  return;
 }





 VAR_17 = FUNC_6();
 for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16) {
  FUNC_9(VAR_0 + VAR_16, 0UL);
  FUNC_9(VAR_1 + VAR_16, 0UL);
 }

 for (VAR_16 = 0; VAR_16 < VAR_11; ++VAR_16) {
  FUNC_9(VAR_2 + VAR_16, 0UL);
  FUNC_9(VAR_3 + VAR_16, 0UL);
 }

 if (FUNC_2(&VAR_13, FUNC_3(VAR_15))) {
  FUNC_8("CPU %d failed to clear debug register pairs\n", VAR_15);
  return;
 }





out_mdbgen:
 if (FUNC_5())
  FUNC_4(&VAR_13, &VAR_13, FUNC_3(VAR_15));
}
