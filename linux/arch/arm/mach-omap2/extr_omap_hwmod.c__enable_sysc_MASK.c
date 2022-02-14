
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct omap_hwmod {int flags; TYPE_2__* class; int _sysc_cache; } ;
struct clockdomain {int flags; } ;
struct TYPE_4__ {TYPE_1__* sysc; } ;
struct TYPE_3__ {int sysc_flags; int idlemodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct omap_hwmod*) ;
 int FUNC_1 (struct omap_hwmod*) ;
 int FUNC_2 (struct omap_hwmod*,int *) ;
 struct clockdomain* FUNC_3 (struct omap_hwmod*) ;
 int FUNC_4 (struct omap_hwmod*,int ,int *) ;
 int FUNC_5 (struct omap_hwmod*,int,int *) ;
 int FUNC_6 (struct omap_hwmod*,int,int *) ;
 int FUNC_7 (struct omap_hwmod*,int,int *) ;
 int FUNC_8 (struct omap_hwmod*) ;
 int FUNC_9 (int ,struct omap_hwmod*) ;

__attribute__((used)) static void FUNC_10(struct omap_hwmod *VAR_21)
{
 u8 VAR_22, VAR_23;
 u32 VAR_24;
 bool VAR_25;
 struct clockdomain *VAR_26;

 if (!VAR_21->class->sysc)
  return;







 if (VAR_21->flags & VAR_2)
  FUNC_1(VAR_21);
 FUNC_8(VAR_21);
 if (VAR_21->flags & VAR_2)
  FUNC_0(VAR_21);

 VAR_24 = VAR_21->_sysc_cache;
 VAR_23 = VAR_21->class->sysc->sysc_flags;

 VAR_26 = FUNC_3(VAR_21);
 if (VAR_23 & VAR_20) {
  if (VAR_21->flags & VAR_11 ||
      VAR_21->flags & VAR_12) {
   VAR_22 = VAR_5;
  } else {
   if (VAR_23 & VAR_18)
    FUNC_2(VAR_21, &VAR_24);
   if (VAR_21->class->sysc->idlemodes & VAR_15)
    VAR_22 = VAR_7;
   else
    VAR_22 = VAR_6;
  }





  VAR_25 = (VAR_26 && VAR_26->flags & VAR_0);
  if (VAR_25 && !(VAR_21->class->sysc->idlemodes &
       (VAR_14 | VAR_15)))
   VAR_22 = VAR_4;

  FUNC_7(VAR_21, VAR_22, &VAR_24);
 }

 if (VAR_23 & VAR_19) {
  if (VAR_21->flags & VAR_3) {
   VAR_22 = VAR_4;
  } else if (VAR_21->flags & VAR_10) {
   VAR_22 = VAR_5;
  } else {
   if (VAR_23 & VAR_18)
    FUNC_2(VAR_21, &VAR_24);
   if (VAR_21->class->sysc->idlemodes & VAR_13)
    VAR_22 = VAR_7;
   else
    VAR_22 = VAR_6;
  }
  FUNC_5(VAR_21, VAR_22, &VAR_24);
 }






 if ((VAR_21->flags & VAR_9) &&
     (VAR_23 & VAR_17))
  FUNC_4(VAR_21, VAR_1, &VAR_24);

 FUNC_9(VAR_24, VAR_21);





 if (VAR_23 & VAR_16) {
  VAR_22 = (VAR_21->flags & VAR_8) ?
   0 : 1;
  FUNC_6(VAR_21, VAR_22, &VAR_24);
  FUNC_9(VAR_24, VAR_21);
 }
}
