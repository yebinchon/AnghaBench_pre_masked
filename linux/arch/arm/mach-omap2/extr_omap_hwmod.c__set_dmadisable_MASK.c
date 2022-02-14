
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct omap_hwmod {scalar_t__ _state; int _sysc_cache; TYPE_3__* class; int name; } ;
struct TYPE_6__ {TYPE_2__* sysc; } ;
struct TYPE_5__ {int sysc_flags; TYPE_1__* sysc_fields; } ;
struct TYPE_4__ {int dmadisable_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,struct omap_hwmod*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct omap_hwmod *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 if (!VAR_3->class->sysc ||
     !(VAR_3->class->sysc->sysc_flags & VAR_1))
  return -VAR_0;

 if (!VAR_3->class->sysc->sysc_fields) {
  FUNC_0(1, "omap_hwmod: %s: offset struct for sysconfig not provided in class\n", VAR_3->name);
  return -VAR_0;
 }


 if (VAR_3->_state != VAR_2) {
  FUNC_3("omap_hwmod: %s: dma can be disabled only from enabled state\n", VAR_3->name);
  return -VAR_0;
 }

 FUNC_2("omap_hwmod: %s: setting DMADISABLE\n", VAR_3->name);

 VAR_4 = VAR_3->_sysc_cache;
 VAR_5 =
  (0x1 << VAR_3->class->sysc->sysc_fields->dmadisable_shift);
 VAR_4 |= VAR_5;
 FUNC_1(VAR_4, VAR_3);

 return 0;
}
