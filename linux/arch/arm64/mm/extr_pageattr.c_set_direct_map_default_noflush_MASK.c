
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_change_data {int clear_mask; int set_mask; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long,int ,int ,struct page_change_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_6 ;

int FUNC_3(struct page *VAR_7)
{
 struct page_change_data VAR_8 = {
  .set_mask = FUNC_0(VAR_2 | VAR_3),
  .clear_mask = FUNC_0(VAR_1),
 };

 if (!VAR_6)
  return 0;

 return FUNC_1(&VAR_5,
       (unsigned long)FUNC_2(VAR_7),
       VAR_0, VAR_4, &VAR_8);
}
