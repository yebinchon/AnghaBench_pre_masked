
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_array {TYPE_1__* page_list; } ;
struct TYPE_2__ {void** page; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct mthca_array *VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7 = (VAR_5 * sizeof (void *)) >> VAR_3;


 if (!VAR_4->page_list[VAR_7].page)
  VAR_4->page_list[VAR_7].page = (void **) FUNC_0(VAR_1);

 if (!VAR_4->page_list[VAR_7].page)
  return -VAR_0;

 VAR_4->page_list[VAR_7].page[VAR_5 & VAR_2] = VAR_6;
 ++VAR_4->page_list[VAR_7].used;

 return 0;
}
