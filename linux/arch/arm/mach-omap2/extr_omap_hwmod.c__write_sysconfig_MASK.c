
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_hwmod {TYPE_2__* class; int _sysc_cache; int name; } ;
struct TYPE_4__ {int (* lock ) (struct omap_hwmod*) ;TYPE_1__* sysc; int (* unlock ) (struct omap_hwmod*) ;} ;
struct TYPE_3__ {int sysc_offs; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,struct omap_hwmod*,int ) ;
 int FUNC_2 (struct omap_hwmod*) ;
 int FUNC_3 (struct omap_hwmod*) ;

__attribute__((used)) static void FUNC_4(u32 VAR_0, struct omap_hwmod *VAR_1)
{
 if (!VAR_1->class->sysc) {
  FUNC_0(1, "omap_hwmod: %s: cannot write OCP_SYSCONFIG: not defined on hwmod's class\n", VAR_1->name);
  return;
 }




 VAR_1->_sysc_cache = VAR_0;







 if (VAR_1->class->unlock)
  VAR_1->class->unlock(VAR_1);

 FUNC_1(VAR_0, VAR_1, VAR_1->class->sysc->sysc_offs);

 if (VAR_1->class->lock)
  VAR_1->class->lock(VAR_1);
}
