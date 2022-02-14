
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct omap_hwmod {TYPE_3__* class; int name; } ;
struct TYPE_6__ {TYPE_2__* sysc; } ;
struct TYPE_5__ {int sysc_flags; TYPE_1__* sysc_fields; } ;
struct TYPE_4__ {int autoidle_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct omap_hwmod *VAR_2, u8 VAR_3,
    u32 *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;

 if (!VAR_2->class->sysc ||
     !(VAR_2->class->sysc->sysc_flags & VAR_1))
  return -VAR_0;

 if (!VAR_2->class->sysc->sysc_fields) {
  FUNC_0(1, "omap_hwmod: %s: offset struct for sysconfig not provided in class\n", VAR_2->name);
  return -VAR_0;
 }

 VAR_6 = VAR_2->class->sysc->sysc_fields->autoidle_shift;
 VAR_5 = (0x1 << VAR_6);

 *VAR_4 &= ~VAR_5;
 *VAR_4 |= VAR_3 << VAR_6;

 return 0;
}
