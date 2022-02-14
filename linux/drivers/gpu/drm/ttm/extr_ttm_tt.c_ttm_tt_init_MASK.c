
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {int dummy; } ;
struct ttm_buffer_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct ttm_tt*) ;
 int FUNC_2 (struct ttm_tt*) ;
 int FUNC_3 (struct ttm_tt*,struct ttm_buffer_object*,int ) ;

int FUNC_4(struct ttm_tt *VAR_1, struct ttm_buffer_object *VAR_2,
  uint32_t VAR_3)
{
 FUNC_3(VAR_1, VAR_2, VAR_3);

 if (FUNC_1(VAR_1)) {
  FUNC_2(VAR_1);
  FUNC_0("Failed allocating page table\n");
  return -VAR_0;
 }
 return 0;
}
