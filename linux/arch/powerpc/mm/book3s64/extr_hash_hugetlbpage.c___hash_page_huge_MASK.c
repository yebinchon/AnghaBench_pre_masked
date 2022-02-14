
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int real_pte_t ;
typedef int pte_t ;
struct TYPE_4__ {int (* hpte_updatepp ) (unsigned long,unsigned long,unsigned long,unsigned int,unsigned int,int,unsigned long) ;} ;
struct TYPE_3__ {unsigned int shift; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *,long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,unsigned long,unsigned long,unsigned long,int,unsigned int,unsigned int,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,int ,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned int,int) ;
 unsigned long FUNC_8 (unsigned long,unsigned long,int) ;
 long FUNC_9 (unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned int,int) ;
 unsigned long FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (int) ;
 TYPE_2__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 unsigned long FUNC_12 (unsigned long,unsigned int,int,int ,int ) ;
 unsigned long FUNC_13 (int ) ;
 unsigned long FUNC_14 (int *,int ,int ,long,long) ;
 unsigned long FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (unsigned long,unsigned long,unsigned long,unsigned int,unsigned int,int,unsigned long) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(unsigned long VAR_15, unsigned long VAR_16, unsigned long VAR_17,
       pte_t *VAR_18, unsigned long VAR_19, unsigned long VAR_20,
       int VAR_21, unsigned int VAR_22, unsigned int VAR_23)
{
 real_pte_t VAR_24;
 unsigned long VAR_25;
 unsigned long VAR_26, VAR_27;
 unsigned long VAR_28, VAR_29;
 long VAR_30, VAR_31;

 FUNC_0(VAR_22 != VAR_14[VAR_23].shift);


 VAR_25 = FUNC_8(VAR_15, VAR_17, VAR_21);
 do {
  VAR_26 = FUNC_15(*VAR_18);

  if (FUNC_18(VAR_26 & VAR_1))
   return 0;

  if (FUNC_18(!FUNC_3(VAR_16, VAR_26)))
   return 1;





  VAR_27 = VAR_26 | VAR_1 | VAR_8;
  if (VAR_16 & VAR_12)
   VAR_27 |= VAR_10;
 } while(!FUNC_16(VAR_18, FUNC_1(VAR_26), FUNC_1(VAR_27)));


 if (VAR_26 & (VAR_3 | VAR_9))
  return 0;

 VAR_28 = FUNC_10(VAR_27);
 if (FUNC_18(VAR_23 == VAR_4))
  VAR_31 = VAR_7;
 else
  VAR_31 = VAR_6;
 VAR_24 = FUNC_2(FUNC_1(VAR_26), VAR_18, VAR_31);

 if (!FUNC_4(VAR_0))




  VAR_28 = FUNC_6(VAR_28, FUNC_1(VAR_26), VAR_19);


 if (FUNC_18(VAR_26 & VAR_2)) {

  unsigned long VAR_32;

  VAR_32 = FUNC_12(VAR_25, VAR_22, VAR_21, VAR_24, 0);
  if (VAR_13.hpte_updatepp(VAR_32, VAR_28, VAR_25, VAR_23,
            VAR_23, VAR_21, VAR_20) == -1)
   VAR_26 &= ~VAR_11;
 }

 if (FUNC_11(!(VAR_26 & VAR_2))) {
  unsigned long VAR_33 = FUNC_7(VAR_25, VAR_22, VAR_21);

  VAR_29 = FUNC_13(FUNC_1(VAR_26)) << VAR_5;


  VAR_27 = (VAR_27 & ~VAR_11) | VAR_2;

  VAR_30 = FUNC_9(VAR_33, VAR_25, VAR_29, VAR_28, 0,
          VAR_23, VAR_21);





  if (FUNC_18(VAR_30 == -2)) {
   *VAR_18 = FUNC_1(VAR_26);
   FUNC_5(VAR_15, VAR_16, VAR_17, VAR_19, VAR_21,
        VAR_23, VAR_23, VAR_26);
   return -1;
  }

  VAR_27 |= FUNC_14(VAR_18, VAR_24, 0, VAR_30, VAR_31);
 }




 *VAR_18 = FUNC_1(VAR_27 & ~VAR_1);
 return 0;
}
