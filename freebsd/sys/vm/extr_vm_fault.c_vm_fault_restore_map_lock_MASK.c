
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct faultstate {int lookup_still_valid; TYPE_1__* first_object; int map; } ;
struct TYPE_4__ {int paging_in_progress; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct faultstate *VAR_0)
{

 FUNC_2(VAR_0->first_object);
 FUNC_0(FUNC_1(VAR_0->first_object->paging_in_progress) > 0);

 if (!FUNC_6(VAR_0->map)) {
  FUNC_4(VAR_0->first_object);
  FUNC_5(VAR_0->map);
  FUNC_3(VAR_0->first_object);
 }
 VAR_0->lookup_still_valid = 1;
}
