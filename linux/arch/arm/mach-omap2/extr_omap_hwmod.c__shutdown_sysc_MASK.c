
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct omap_hwmod {TYPE_2__* class; int _sysc_cache; } ;
struct TYPE_4__ {TYPE_1__* sysc; } ;
struct TYPE_3__ {int sysc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_hwmod*,int ,int *) ;
 int FUNC_1 (struct omap_hwmod*,int,int *) ;
 int FUNC_2 (struct omap_hwmod*,int ,int *) ;
 int FUNC_3 (int ,struct omap_hwmod*) ;

__attribute__((used)) static void FUNC_4(struct omap_hwmod *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;

 if (!VAR_4->class->sysc)
  return;

 VAR_5 = VAR_4->_sysc_cache;
 VAR_6 = VAR_4->class->sysc->sysc_flags;

 if (VAR_6 & VAR_3)
  FUNC_2(VAR_4, VAR_0, &VAR_5);

 if (VAR_6 & VAR_2)
  FUNC_0(VAR_4, VAR_0, &VAR_5);

 if (VAR_6 & VAR_1)
  FUNC_1(VAR_4, 1, &VAR_5);

 FUNC_3(VAR_5, VAR_4);
}
