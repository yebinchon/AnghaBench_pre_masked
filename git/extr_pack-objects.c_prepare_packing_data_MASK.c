
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct packing_data {int odb_lock; void* oe_delta_size_limit; void* oe_size_limit; struct repository* repo; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 void* FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct packing_data*) ;

void FUNC_4(struct repository *VAR_2, struct packing_data *VAR_3)
{
 VAR_3->repo = VAR_2;

 if (FUNC_0("GIT_TEST_FULL_IN_PACK_ARRAY", 0)) {




 } else {
  FUNC_3(VAR_3);
 }

 VAR_3->oe_size_limit = FUNC_1("GIT_TEST_OE_SIZE",
          1U << VAR_1);
 VAR_3->oe_delta_size_limit = FUNC_1("GIT_TEST_OE_DELTA_SIZE",
         1UL << VAR_0);
 FUNC_2(&VAR_3->odb_lock);
}
