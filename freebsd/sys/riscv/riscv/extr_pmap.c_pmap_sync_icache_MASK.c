
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int pmap_t ;
struct TYPE_5__ {int __bits; } ;
typedef TYPE_1__ cpuset_t ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;

void
FUNC_7(pmap_t VAR_3, vm_offset_t VAR_4, vm_size_t VAR_5)
{
 cpuset_t VAR_6;
 FUNC_5();
 VAR_6 = VAR_0;
 FUNC_0(FUNC_2(VAR_1), &VAR_6);
 FUNC_3();
 if (!FUNC_1(&VAR_6) && VAR_2)
  FUNC_4(VAR_6.__bits);
 FUNC_6();
}
