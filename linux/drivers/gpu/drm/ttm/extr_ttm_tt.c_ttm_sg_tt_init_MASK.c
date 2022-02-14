
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {int dummy; } ;
struct ttm_dma_tt {int pages_list; struct ttm_tt ttm; } ;
struct ttm_buffer_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ttm_dma_tt*) ;
 int FUNC_3 (struct ttm_dma_tt*) ;
 int FUNC_4 (struct ttm_tt*) ;
 int FUNC_5 (struct ttm_tt*,struct ttm_buffer_object*,int) ;

int FUNC_6(struct ttm_dma_tt *VAR_2, struct ttm_buffer_object *VAR_3,
     uint32_t VAR_4)
{
 struct ttm_tt *VAR_5 = &VAR_2->ttm;
 int VAR_6;

 FUNC_5(VAR_5, VAR_3, VAR_4);

 FUNC_0(&VAR_2->pages_list);
 if (VAR_4 & VAR_1)
  VAR_6 = FUNC_3(VAR_2);
 else
  VAR_6 = FUNC_2(VAR_2);
 if (VAR_6) {
  FUNC_4(VAR_5);
  FUNC_1("Failed allocating page table\n");
  return -VAR_0;
 }
 return 0;
}
