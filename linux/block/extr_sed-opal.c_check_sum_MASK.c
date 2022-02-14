
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct d0_single_user_mode {int num_locking_objects; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static bool FUNC_2(const void *VAR_0)
{
 const struct d0_single_user_mode *VAR_1 = VAR_0;
 u32 VAR_2 = FUNC_0(VAR_1->num_locking_objects);

 if (VAR_2 == 0) {
  FUNC_1("Need at least one locking object.\n");
  return 0;
 }

 FUNC_1("Number of locking objects: %d\n", VAR_2);

 return 1;
}
