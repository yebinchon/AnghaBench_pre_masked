
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p; } ;
struct TYPE_4__ {int pkgname; } ;
typedef TYPE_1__ PORT ;
typedef TYPE_2__ DEP ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(DEP * VAR_0, size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2;
 PORT * VAR_4;

top:

 if ((2 * VAR_2 + 1 < VAR_1) &&
     (FUNC_0(VAR_0[VAR_3].p->pkgname, VAR_0[2 * VAR_2 + 1].p->pkgname) < 0))
  VAR_3 = 2 * VAR_2 + 1;
 if ((2 * VAR_2 + 2 < VAR_1) &&
     (FUNC_0(VAR_0[VAR_3].p->pkgname, VAR_0[2 * VAR_2 + 2].p->pkgname) < 0))
  VAR_3 = 2 * VAR_2 + 2;


 if (VAR_3 != VAR_2) {
  VAR_4 = VAR_0[VAR_2].p;
  VAR_0[VAR_2].p = VAR_0[VAR_3].p;
  VAR_0[VAR_3].p = VAR_4;
  VAR_2 = VAR_3;
  goto top;
 }
}
