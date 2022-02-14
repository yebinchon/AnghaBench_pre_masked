
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct omap_hwmod {scalar_t__ _sysc_cache; int flags; TYPE_2__* class; } ;
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
 int FUNC_0 (struct omap_hwmod*,scalar_t__*) ;
 int FUNC_1 (struct omap_hwmod*,int,scalar_t__*) ;
 int FUNC_2 (struct omap_hwmod*,int,scalar_t__*) ;
 int FUNC_3 (scalar_t__,struct omap_hwmod*) ;

__attribute__((used)) static void FUNC_4(struct omap_hwmod *VAR_11)
{
 u8 VAR_12, VAR_13;
 u32 VAR_14;

 if (!VAR_11->class->sysc)
  return;

 VAR_14 = VAR_11->_sysc_cache;
 VAR_13 = VAR_11->class->sysc->sysc_flags;

 if (VAR_13 & VAR_10) {
  if (VAR_11->flags & VAR_5) {
   VAR_12 = VAR_1;
  } else {
   if (VAR_13 & VAR_8)
    FUNC_0(VAR_11, &VAR_14);
   if (VAR_11->class->sysc->idlemodes & VAR_7)
    VAR_12 = VAR_3;
   else
    VAR_12 = VAR_2;
  }
  FUNC_2(VAR_11, VAR_12, &VAR_14);
 }

 if (VAR_13 & VAR_9) {
  if ((VAR_11->flags & VAR_4) ||
      (VAR_11->flags & VAR_0)) {
   VAR_12 = VAR_1;
  } else {
   if (VAR_13 & VAR_8)
    FUNC_0(VAR_11, &VAR_14);
   if (VAR_11->class->sysc->idlemodes & VAR_6)
    VAR_12 = VAR_3;
   else
    VAR_12 = VAR_2;
  }
  FUNC_1(VAR_11, VAR_12, &VAR_14);
 }


 if (VAR_11->_sysc_cache != VAR_14)
  FUNC_3(VAR_14, VAR_11);
}
