
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int num_pages; } ;
struct ttm_mem_reg {int start; } ;
struct qxl_ttm_tt {unsigned long offset; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,struct ttm_mem_reg*,struct ttm_tt*) ;

__attribute__((used)) static int FUNC_1(struct ttm_tt *VAR_1,
    struct ttm_mem_reg *VAR_2)
{
 struct qxl_ttm_tt *VAR_3 = (void *)VAR_1;

 VAR_3->offset = (unsigned long)(VAR_2->start << VAR_0);
 if (!VAR_1->num_pages) {
  FUNC_0(1, "nothing to bind %lu pages for mreg %p back %p!\n",
       VAR_1->num_pages, VAR_2, VAR_1);
 }

 return -1;
}
