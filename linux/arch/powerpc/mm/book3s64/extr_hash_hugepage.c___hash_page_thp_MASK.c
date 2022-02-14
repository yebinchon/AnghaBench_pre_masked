
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pmd_t ;
struct TYPE_4__ {int (* hpte_updatepp ) (unsigned long,unsigned long,unsigned long,unsigned int,int,int,unsigned long) ;unsigned long (* hpte_insert ) (unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned int,int,int) ;int (* hpte_remove ) (unsigned long) ;} ;
struct TYPE_3__ {unsigned long shift; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_1 (int ) ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long,unsigned long,int *,int ,int,unsigned long) ;
 unsigned char* FUNC_7 (int *) ;
 int FUNC_8 (unsigned long,unsigned long,unsigned long,unsigned long,int,unsigned int,int,unsigned long) ;
 unsigned long FUNC_9 (unsigned long,int ,unsigned long) ;
 unsigned long FUNC_10 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_11 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_12 (unsigned char*,unsigned int) ;
 unsigned int FUNC_13 (unsigned char*,unsigned int) ;
 unsigned long FUNC_14 (unsigned long) ;
 unsigned long VAR_19 ;
 int FUNC_15 (unsigned char*,unsigned int,unsigned long) ;
 int FUNC_16 (unsigned char*,int ,unsigned int) ;
 int FUNC_17 () ;
 TYPE_2__ VAR_20 ;
 TYPE_1__* VAR_21 ;
 int VAR_22 ;
 unsigned long FUNC_18 (int ) ;
 unsigned long FUNC_19 (int ) ;
 int FUNC_20 (int *,int ,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (unsigned long,unsigned long,unsigned long,unsigned int,int,int,unsigned long) ;
 unsigned long FUNC_23 (unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned int,int,int) ;
 unsigned long FUNC_24 (unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned int,int,int) ;
 int FUNC_25 (unsigned long) ;
 scalar_t__ FUNC_26 (int) ;

int FUNC_27(unsigned long VAR_23, unsigned long VAR_24, unsigned long VAR_25,
      pmd_t *VAR_26, unsigned long VAR_27, unsigned long VAR_28,
      int VAR_29, unsigned int VAR_30)
{
 unsigned int VAR_31, VAR_32;
 unsigned char *VAR_33;
 unsigned long VAR_34, VAR_35, VAR_36;
 unsigned long VAR_37, VAR_38;
 int VAR_39, VAR_40 = VAR_8;
 unsigned long VAR_41, VAR_42, VAR_43, VAR_44;




 do {
  pmd_t VAR_45 = FUNC_1(*VAR_26);

  VAR_37 = FUNC_19(VAR_45);

  if (FUNC_26(VAR_37 & VAR_4))
   return 0;

  if (FUNC_26(!FUNC_4(VAR_24, VAR_37)))
   return 1;




  VAR_38 = VAR_37 | VAR_4 | VAR_13;
  if (VAR_24 & VAR_16)
   VAR_38 |= VAR_15;
 } while (!FUNC_20(VAR_26, FUNC_2(VAR_37), FUNC_2(VAR_38)));




 if (!(VAR_37 & (VAR_7 | VAR_14)))
  return 0;

 VAR_34 = FUNC_14(VAR_38);
 VAR_43 = VAR_21[VAR_30].shift;
 VAR_31 = (VAR_23 & ~VAR_1) >> VAR_43;
 FUNC_0(VAR_31 >= VAR_12);

 VAR_41 = FUNC_11(VAR_23, VAR_25, VAR_29);
 VAR_33 = FUNC_7(VAR_26);
 if (VAR_30 == VAR_9) {





  if ((VAR_37 & VAR_6) && !(VAR_37 & VAR_5)) {
   FUNC_6(VAR_25, VAR_23, VAR_26, VAR_10,
         VAR_29, VAR_28);
   FUNC_16(VAR_33, 0, VAR_12);
  }
 }

 VAR_32 = FUNC_13(VAR_33, VAR_31);
 if (VAR_32) {

  VAR_42 = FUNC_10(VAR_41, VAR_43, VAR_29);
  VAR_36 = FUNC_12(VAR_33, VAR_31);
  if (VAR_36 & VAR_18)
   VAR_42 = ~VAR_42;
  VAR_44 = (VAR_42 & VAR_19) * VAR_2;
  VAR_44 += VAR_36 & VAR_17;

  VAR_39 = VAR_20.hpte_updatepp(VAR_44, VAR_34, VAR_41,
       VAR_30, VAR_40, VAR_29, VAR_28);



  if (VAR_39 == -1) {





   VAR_32 = 0;
   VAR_33[VAR_31] = 0;
  }
 }

 if (!VAR_32) {
  unsigned long VAR_46;

  VAR_42 = FUNC_10(VAR_41, VAR_43, VAR_29);

  VAR_35 = FUNC_18(FUNC_2(VAR_37)) << VAR_11;
  VAR_38 |= VAR_6;

repeat:
  VAR_46 = (VAR_42 & VAR_19) * VAR_2;


  VAR_44 = VAR_20.hpte_insert(VAR_46, VAR_41, VAR_35, VAR_34, 0,
      VAR_30, VAR_40, VAR_29);



  if (FUNC_26(VAR_44 == -1)) {
   VAR_46 = (~VAR_42 & VAR_19) * VAR_2;
   VAR_44 = VAR_20.hpte_insert(VAR_46, VAR_41, VAR_35,
       VAR_34,
       VAR_3,
       VAR_30, VAR_40, VAR_29);
   if (VAR_44 == -1) {
    if (FUNC_17() & 0x1)
     VAR_46 = (VAR_42 & VAR_19) *
       VAR_2;

    VAR_20.hpte_remove(VAR_46);
    goto repeat;
   }
  }




  if (FUNC_26(VAR_44 == -2)) {
   *VAR_26 = FUNC_2(VAR_37);
   FUNC_8(VAR_23, VAR_24, VAR_25, VAR_27, VAR_29,
        VAR_30, VAR_40, VAR_37);
   return -1;
  }





  FUNC_15(VAR_33, VAR_31, VAR_44);
 }




 if (VAR_30 == VAR_9)
  VAR_38 |= VAR_5;





 FUNC_21();
 *VAR_26 = FUNC_2(VAR_38 & ~VAR_4);
 return 0;
}
