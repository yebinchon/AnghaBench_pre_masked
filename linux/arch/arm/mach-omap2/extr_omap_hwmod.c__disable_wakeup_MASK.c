
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct omap_hwmod {TYPE_3__* class; int name; } ;
struct TYPE_6__ {TYPE_2__* sysc; } ;
struct TYPE_5__ {int sysc_flags; int idlemodes; TYPE_1__* sysc_fields; } ;
struct TYPE_4__ {int enwkup_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct omap_hwmod*,int ,int*) ;
 int FUNC_2 (struct omap_hwmod*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct omap_hwmod *VAR_5, u32 *VAR_6)
{
 if (!VAR_5->class->sysc ||
     !((VAR_5->class->sysc->sysc_flags & VAR_4) ||
       (VAR_5->class->sysc->idlemodes & VAR_3) ||
       (VAR_5->class->sysc->idlemodes & VAR_2)))
  return -VAR_0;

 if (!VAR_5->class->sysc->sysc_fields) {
  FUNC_0(1, "omap_hwmod: %s: offset struct for sysconfig not provided in class\n", VAR_5->name);
  return -VAR_0;
 }

 if (VAR_5->class->sysc->sysc_flags & VAR_4)
  *VAR_6 &= ~(0x1 << VAR_5->class->sysc->sysc_fields->enwkup_shift);

 if (VAR_5->class->sysc->idlemodes & VAR_3)
  FUNC_2(VAR_5, VAR_1, VAR_6);
 if (VAR_5->class->sysc->idlemodes & VAR_2)
  FUNC_1(VAR_5, VAR_1, VAR_6);



 return 0;
}
