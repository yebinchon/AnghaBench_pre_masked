
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_1__* uma_keg_t ;
struct TYPE_8__ {int uz_flags; int uz_lock; int * uz_lockptr; int uz_fails; int uz_frees; int uz_allocs; struct TYPE_8__* uz_keg; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,TYPE_1__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_9, int VAR_10, void *VAR_11)
{
 uma_zone_t VAR_12;
 uma_keg_t VAR_13;

 VAR_12 = (uma_zone_t)VAR_9;

 if (!(VAR_12->uz_flags & VAR_3))
  FUNC_2(VAR_12);

 FUNC_4(&VAR_7);
 FUNC_0(VAR_12, VAR_8);
 FUNC_5(&VAR_7);






 FUNC_7(VAR_12, VAR_0, 1);



 if ((VAR_12->uz_flags & (VAR_4 | VAR_2)) == 0) {
  VAR_13 = VAR_12->uz_keg;
  FUNC_4(&VAR_7);
  FUNC_0(VAR_13, VAR_6);
  FUNC_5(&VAR_7);
  FUNC_6(VAR_5, VAR_13, ((void*)0), VAR_1);
 }
 FUNC_3(VAR_12->uz_allocs);
 FUNC_3(VAR_12->uz_frees);
 FUNC_3(VAR_12->uz_fails);
 if (VAR_12->uz_lockptr == &VAR_12->uz_lock)
  FUNC_1(VAR_12);
}
