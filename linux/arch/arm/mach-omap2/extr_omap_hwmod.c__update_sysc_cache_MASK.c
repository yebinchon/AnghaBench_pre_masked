
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hwmod {int _int_flags; TYPE_2__* class; int _sysc_cache; int name; } ;
struct TYPE_4__ {TYPE_1__* sysc; } ;
struct TYPE_3__ {int sysc_flags; int sysc_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct omap_hwmod*,int ) ;

__attribute__((used)) static int FUNC_2(struct omap_hwmod *VAR_3)
{
 if (!VAR_3->class->sysc) {
  FUNC_0(1, "omap_hwmod: %s: cannot read OCP_SYSCONFIG: not defined on hwmod's class\n", VAR_3->name);
  return -VAR_0;
 }



 VAR_3->_sysc_cache = FUNC_1(VAR_3, VAR_3->class->sysc->sysc_offs);

 if (!(VAR_3->class->sysc->sysc_flags & VAR_1))
  VAR_3->_int_flags |= VAR_2;

 return 0;
}
