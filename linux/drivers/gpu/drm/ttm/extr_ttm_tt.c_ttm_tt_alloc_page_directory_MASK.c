
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int pages; int num_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct ttm_tt *VAR_3)
{
 VAR_3->pages = FUNC_0(VAR_3->num_pages, sizeof(void*),
   VAR_1 | VAR_2);
 if (!VAR_3->pages)
  return -VAR_0;
 return 0;
}
