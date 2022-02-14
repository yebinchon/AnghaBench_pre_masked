
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_hwmod_class_sysconfig {int sysc_flags; scalar_t__ syss_offs; scalar_t__ sysc_offs; TYPE_1__* sysc_fields; } ;
struct omap_hwmod {TYPE_2__* class; } ;
struct TYPE_4__ {struct omap_hwmod_class_sysconfig* sysc; } ;
struct TYPE_3__ {int srst_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_hwmod*,scalar_t__) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct omap_hwmod *VAR_4)
{
 struct omap_hwmod_class_sysconfig *VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_4->class->sysc;

 if (VAR_5->sysc_flags & VAR_2 && VAR_5->syss_offs > 0)
  FUNC_1((FUNC_0(VAR_4, VAR_5->syss_offs)
       & VAR_3),
      VAR_0, VAR_7);
 else if (VAR_5->sysc_flags & VAR_1) {
  VAR_6 = (0x1 << VAR_5->sysc_fields->srst_shift);
  FUNC_1(!(FUNC_0(VAR_4, VAR_5->sysc_offs)
        & VAR_6),
      VAR_0, VAR_7);
 }

 return VAR_7;
}
