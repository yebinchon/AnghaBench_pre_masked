
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int real_pte_t ;
typedef int pte_t ;
struct TYPE_4__ {int (* hpte_updatepp ) (unsigned long,unsigned long,unsigned long,size_t,size_t,int,unsigned long) ;unsigned long (* hpte_insert ) (unsigned long,unsigned long,unsigned long,unsigned long,int ,size_t,size_t,int) ;int (* hpte_remove ) (unsigned long) ;} ;
struct TYPE_3__ {unsigned long shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 size_t VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,unsigned long,unsigned long,unsigned long,int,size_t,size_t,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,int ,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_8 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_9 (unsigned long) ;
 unsigned long VAR_13 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 () ;
 TYPE_2__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 unsigned long FUNC_12 (unsigned long,unsigned long,int,int ,int ) ;
 unsigned long FUNC_13 (int ) ;
 unsigned long FUNC_14 (int *,int ,int ,unsigned long,int ) ;
 unsigned long FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (unsigned long,unsigned long,unsigned long,size_t,size_t,int,unsigned long) ;
 unsigned long FUNC_18 (unsigned long,unsigned long,unsigned long,unsigned long,int ,size_t,size_t,int) ;
 unsigned long FUNC_19 (unsigned long,unsigned long,unsigned long,unsigned long,int ,size_t,size_t,int) ;
 int FUNC_20 (unsigned long) ;
 scalar_t__ FUNC_21 (int) ;

int FUNC_22(unsigned long VAR_16, unsigned long VAR_17, unsigned long VAR_18,
     pte_t *VAR_19, unsigned long VAR_20, unsigned long VAR_21,
     int VAR_22, int VAR_23)
{
 real_pte_t VAR_24;
 unsigned long VAR_25;
 unsigned long VAR_26, VAR_27;
 unsigned long VAR_28, VAR_29;
 unsigned long VAR_30, VAR_31, VAR_32;
 unsigned long VAR_33 = VAR_15[VAR_6].shift;




 do {
  pte_t VAR_34 = FUNC_0(*VAR_19);

  VAR_28 = FUNC_15(VAR_34);

  if (FUNC_21(VAR_28 & VAR_4))
   return 0;

  if (FUNC_21(!FUNC_3(VAR_17, VAR_28)))
   return 1;





  VAR_29 = VAR_28 | VAR_4 | VAR_9;
  if (VAR_17 & VAR_12)
   VAR_29 |= VAR_10;
 } while (!FUNC_16(VAR_19, FUNC_1(VAR_28), FUNC_1(VAR_29)));





 VAR_26 = FUNC_9(VAR_29);
 VAR_24 = FUNC_2(FUNC_1(VAR_28), VAR_19, VAR_8);

 if (FUNC_4(VAR_1) &&
     !FUNC_4(VAR_0))
  VAR_26 = FUNC_6(VAR_26, FUNC_1(VAR_28), VAR_20);

 VAR_30 = FUNC_8(VAR_16, VAR_18, VAR_22);
 if (FUNC_21(VAR_28 & VAR_5)) {



  unsigned long VAR_35 = FUNC_12(VAR_30, VAR_33, VAR_22,
        VAR_24, 0);

  if (VAR_14.hpte_updatepp(VAR_35, VAR_26, VAR_30, VAR_6,
            VAR_6, VAR_22, VAR_21) == -1)
   VAR_28 &= ~VAR_11;
 }

 if (FUNC_10(!(VAR_28 & VAR_5))) {

  VAR_27 = FUNC_13(FUNC_1(VAR_28)) << VAR_7;
  VAR_31 = FUNC_7(VAR_30, VAR_33, VAR_22);

repeat:
  VAR_25 = (VAR_31 & VAR_13) * VAR_2;


  VAR_32 = VAR_14.hpte_insert(VAR_25, VAR_30, VAR_27, VAR_26, 0,
      VAR_6, VAR_6, VAR_22);



  if (FUNC_21(VAR_32 == -1)) {
   VAR_25 = (~VAR_31 & VAR_13) * VAR_2;
   VAR_32 = VAR_14.hpte_insert(VAR_25, VAR_30, VAR_27,
       VAR_26,
       VAR_3,
       VAR_6,
       VAR_6, VAR_22);
   if (VAR_32 == -1) {
    if (FUNC_11() & 0x1)
     VAR_25 = (VAR_31 & VAR_13) *
       VAR_2;
    VAR_14.hpte_remove(VAR_25);



    goto repeat;
   }
  }




  if (FUNC_21(VAR_32 == -2)) {
   *VAR_19 = FUNC_1(VAR_28);
   FUNC_5(VAR_16, VAR_17, VAR_18, VAR_20, VAR_22,
        VAR_6, VAR_6, VAR_28);
   return -1;
  }
  VAR_29 = (VAR_29 & ~VAR_11) | VAR_5;
  VAR_29 |= FUNC_14(VAR_19, VAR_24, 0, VAR_32, VAR_8);
 }
 *VAR_19 = FUNC_1(VAR_29 & ~VAR_4);
 return 0;
}
