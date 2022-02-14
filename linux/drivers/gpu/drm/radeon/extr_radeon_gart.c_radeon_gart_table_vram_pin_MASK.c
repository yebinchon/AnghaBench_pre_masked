
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int num_gpu_pages; int * pages_entry; int table_addr; int robj; int ptr; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_device*,int,int ) ;
 int FUNC_7 (struct radeon_device*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct radeon_device *VAR_1)
{
 uint64_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1->gart.robj, 0);
 if (FUNC_8(VAR_3 != 0))
  return VAR_3;
 VAR_3 = FUNC_2(VAR_1->gart.robj,
    VAR_0, &VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_1->gart.robj);
  return VAR_3;
 }
 VAR_3 = FUNC_1(VAR_1->gart.robj, &VAR_1->gart.ptr);
 if (VAR_3)
  FUNC_4(VAR_1->gart.robj);
 FUNC_5(VAR_1->gart.robj);
 VAR_1->gart.table_addr = VAR_2;

 if (!VAR_3) {
  int VAR_4;




  for (VAR_4 = 0; VAR_4 < VAR_1->gart.num_gpu_pages; VAR_4++)
   FUNC_6(VAR_1, VAR_4, VAR_1->gart.pages_entry[VAR_4]);
  FUNC_0();
  FUNC_7(VAR_1);
 }

 return VAR_3;
}
