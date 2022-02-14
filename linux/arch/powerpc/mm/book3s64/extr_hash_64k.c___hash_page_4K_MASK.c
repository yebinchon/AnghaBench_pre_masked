
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int hidx; } ;
typedef TYPE_1__ real_pte_t ;
typedef int pte_t ;
struct TYPE_11__ {int (* hpte_updatepp ) (unsigned long,unsigned long,unsigned long,size_t,size_t,int,unsigned long) ;unsigned long (* hpte_insert ) (unsigned long,unsigned long,unsigned long,unsigned long,int ,size_t,size_t,int) ;int (* hpte_remove ) (unsigned long) ;int (* hpte_invalidate ) (unsigned long,unsigned long,size_t,size_t,int,int ) ;} ;
struct TYPE_10__ {unsigned long shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__ FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__,unsigned int) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned long,TYPE_1__,int ,int,unsigned long) ;
 int FUNC_7 (unsigned long,unsigned long,unsigned long,unsigned long,int,size_t,size_t,unsigned long) ;
 unsigned long FUNC_8 (unsigned long,int ,unsigned long) ;
 unsigned long FUNC_9 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_10 (unsigned long,unsigned long,int) ;
 int FUNC_11 (unsigned long) ;
 unsigned long FUNC_12 (unsigned long) ;
 unsigned long VAR_19 ;
 int FUNC_13 () ;
 TYPE_5__ VAR_20 ;
 TYPE_4__* VAR_21 ;
 unsigned long FUNC_14 (unsigned long,unsigned long,int,TYPE_1__,unsigned int) ;
 unsigned long FUNC_15 (int ) ;
 unsigned long FUNC_16 (int *,TYPE_1__,unsigned int,unsigned long,int ) ;
 unsigned long FUNC_17 (int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (unsigned long,unsigned long,unsigned long,size_t,size_t,int,unsigned long) ;
 unsigned long FUNC_20 (unsigned long,unsigned long,unsigned long,unsigned long,int ,size_t,size_t,int) ;
 unsigned long FUNC_21 (unsigned long,unsigned long,unsigned long,unsigned long,int ,size_t,size_t,int) ;
 int FUNC_22 (unsigned long,unsigned long,size_t,size_t,int,int ) ;
 int FUNC_23 (unsigned long) ;
 scalar_t__ FUNC_24 (int) ;

int FUNC_25(unsigned long VAR_22, unsigned long VAR_23, unsigned long VAR_24,
     pte_t *VAR_25, unsigned long VAR_26, unsigned long VAR_27,
     int VAR_28, int VAR_29)
{
 real_pte_t VAR_30;
 unsigned long VAR_31;
 unsigned int VAR_32;
 unsigned long VAR_33, VAR_34;
 unsigned long VAR_35, VAR_36, VAR_37;
 unsigned long VAR_38, VAR_39, VAR_40, VAR_41;
 unsigned long VAR_42 = VAR_21[VAR_10].shift;




 do {
  pte_t VAR_43 = FUNC_0(*VAR_25);

  VAR_35 = FUNC_17(VAR_43);

  if (FUNC_24(VAR_35 & VAR_6))
   return 0;

  if (FUNC_24(!FUNC_4(VAR_23, VAR_35)))
   return 1;





  VAR_36 = VAR_35 | VAR_6 | VAR_15 | VAR_7;
  if (VAR_23 & VAR_17)
   VAR_36 |= VAR_16;
 } while (!FUNC_18(VAR_25, FUNC_1(VAR_35), FUNC_1(VAR_36)));




 VAR_37 = VAR_36 & ~VAR_29;
 VAR_33 = FUNC_12(VAR_37);

 if (FUNC_5(VAR_1) &&
     !FUNC_5(VAR_0)) {





  VAR_33 = FUNC_8(VAR_33, FUNC_1(VAR_35), VAR_26);
 }

 VAR_32 = (VAR_22 & (VAR_13 - 1)) >> VAR_42;
 VAR_38 = FUNC_10(VAR_22, VAR_24, VAR_28);
 VAR_30 = FUNC_2(FUNC_1(VAR_35), VAR_25, VAR_14);



 if (!(VAR_35 & VAR_8))
  goto htab_insert_hpte;




 if (!(VAR_35 & VAR_7)) {
  FUNC_6(VAR_38, VAR_30, VAR_11, VAR_28, VAR_27);





  VAR_35 &= ~VAR_8;
  VAR_36 &= ~VAR_8;
  goto htab_insert_hpte;
 }



 if (FUNC_3(VAR_30, VAR_32)) {
  int VAR_44;

  VAR_41 = FUNC_14(VAR_38, VAR_42, VAR_28, VAR_30,
        VAR_32);
  VAR_44 = VAR_20.hpte_updatepp(VAR_41, VAR_33, VAR_38,
       VAR_10, VAR_10,
       VAR_28, VAR_27);





  if (VAR_44 == -1)
   goto htab_insert_hpte;

  *VAR_25 = FUNC_1(VAR_36 & ~VAR_6);
  return 0;
 }

htab_insert_hpte:





 if (!(VAR_35 & VAR_7))
  VAR_30.hidx = VAR_9;




 if (VAR_35 & VAR_5) {




  VAR_34 = FUNC_15(FUNC_1(VAR_35)) << VAR_4;
 } else {
  VAR_34 = FUNC_15(FUNC_1(VAR_35)) << VAR_12;
  VAR_34 += (VAR_32 << VAR_42);
 }
 VAR_39 = FUNC_9(VAR_38, VAR_42, VAR_28);
repeat:
 VAR_31 = (VAR_39 & VAR_19) * VAR_2;


 VAR_40 = VAR_20.hpte_insert(VAR_31, VAR_38, VAR_34, VAR_33, 0,
     VAR_10, VAR_10, VAR_28);



 if (FUNC_24(VAR_40 == -1)) {
  bool VAR_45;

  VAR_31 = (~VAR_39 & VAR_19) * VAR_2;
  VAR_40 = VAR_20.hpte_insert(VAR_31, VAR_38, VAR_34,
      VAR_33, VAR_3,
      VAR_10, VAR_10,
      VAR_28);

  VAR_45 = FUNC_11(VAR_40);
  if (FUNC_24(VAR_45)) {






   VAR_41 = VAR_40 & VAR_18;
   VAR_20.hpte_invalidate(VAR_31 + VAR_41, VAR_38,
           VAR_10, VAR_10,
           VAR_28, 0);
  }

  if (FUNC_24(VAR_40 == -1 || VAR_45)) {






   if (VAR_45 || (FUNC_13() & 0x1))
    VAR_31 = (VAR_39 & VAR_19) * VAR_2;

   VAR_20.hpte_remove(VAR_31);



   goto repeat;
  }
 }




 if (FUNC_24(VAR_40 == -2)) {
  *VAR_25 = FUNC_1(VAR_35);
  FUNC_7(VAR_22, VAR_23, VAR_24, VAR_26, VAR_28,
       VAR_10, VAR_10, VAR_35);
  return -1;
 }

 VAR_36 |= FUNC_16(VAR_25, VAR_30, VAR_32, VAR_40, VAR_14);
 VAR_36 |= VAR_8;

 *VAR_25 = FUNC_1(VAR_36 & ~VAR_6);
 return 0;
}
