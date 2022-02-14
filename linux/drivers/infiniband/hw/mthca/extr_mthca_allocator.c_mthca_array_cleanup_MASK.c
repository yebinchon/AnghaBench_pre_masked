
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_array {TYPE_1__* page_list; } ;
struct TYPE_2__ {scalar_t__ page; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct mthca_array *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < (VAR_2 * sizeof (void *) + VAR_0 - 1) / VAR_0; ++VAR_3)
  FUNC_0((unsigned long) VAR_1->page_list[VAR_3].page);

 FUNC_1(VAR_1->page_list);
}
