
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long vmalloc_sllp; } ;
struct TYPE_3__ {unsigned long sllp; } ;


 unsigned long VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long FUNC_0 (unsigned long) ;
 TYPE_2__* VAR_14 ;
 int FUNC_1 (int ) ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 TYPE_1__* VAR_17 ;
 size_t VAR_18 ;
 long FUNC_2 (unsigned long,unsigned long,unsigned long,int,int) ;

__attribute__((used)) static long FUNC_3(unsigned long VAR_19, unsigned long VAR_20)
{
 unsigned long VAR_21;
 unsigned long VAR_22;
 int VAR_23;

 if (VAR_20 == VAR_6) {


  if ((VAR_19 & VAR_0) > (1UL << VAR_7))
   return -VAR_1;

  VAR_22 = VAR_11 | VAR_17[VAR_16].sllp;
 } else if (VAR_20 == VAR_12) {

  if (VAR_19 >= VAR_3)
   return -VAR_1;

  VAR_22 = VAR_14->vmalloc_sllp;

 } else if (VAR_20 == VAR_5) {

  if (VAR_19 >= VAR_2)
   return -VAR_1;

  VAR_22 = VAR_11 | VAR_17[VAR_15].sllp;

 } else {
  return -VAR_1;
 }

 VAR_23 = VAR_9;
 if (!FUNC_1(VAR_8))
  VAR_23 = VAR_10;

 VAR_21 = FUNC_0(VAR_19);

 return FUNC_2(VAR_19, VAR_21, VAR_22, VAR_23, 1);
}
