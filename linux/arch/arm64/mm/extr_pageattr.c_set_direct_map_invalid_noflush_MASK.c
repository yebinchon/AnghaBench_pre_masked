
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_change_data {int clear_mask; int set_mask; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long,int ,int ,struct page_change_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_4 ;

int FUNC_3(struct page *VAR_5)
{
 struct page_change_data VAR_6 = {
  .set_mask = FUNC_0(0),
  .clear_mask = FUNC_0(VAR_1),
 };

 if (!VAR_4)
  return 0;

 return FUNC_1(&VAR_3,
       (unsigned long)FUNC_2(VAR_5),
       VAR_0, VAR_2, &VAR_6);
}
