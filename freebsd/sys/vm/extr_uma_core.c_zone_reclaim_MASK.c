
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_8__ {int uz_flags; int uz_keg; int uz_lockptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(uma_zone_t VAR_4, int VAR_5, bool VAR_6)
{







 FUNC_0(VAR_4);
 while (VAR_4->uz_flags & VAR_3) {
  if (VAR_5 == VAR_0)
   goto out;
  FUNC_4(VAR_4, VAR_4->uz_lockptr, VAR_1, "zonedrain", 1);
 }
 VAR_4->uz_flags |= VAR_3;
 FUNC_2(VAR_4, VAR_6);
 FUNC_1(VAR_4);






 if ((VAR_4->uz_flags & VAR_2) == 0)
  FUNC_3(VAR_4->uz_keg);
 FUNC_0(VAR_4);
 VAR_4->uz_flags &= ~VAR_3;
 FUNC_5(VAR_4);
out:
 FUNC_1(VAR_4);
}
