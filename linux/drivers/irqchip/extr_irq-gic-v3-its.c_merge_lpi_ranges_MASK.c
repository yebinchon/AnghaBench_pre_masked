
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi_range {scalar_t__ base_id; scalar_t__ span; int entry; } ;


 int FUNC_0 (struct lpi_range*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct lpi_range *VAR_1, struct lpi_range *VAR_2)
{
 if (&VAR_1->entry == &VAR_0 || &VAR_2->entry == &VAR_0)
  return;
 if (VAR_1->base_id + VAR_1->span != VAR_2->base_id)
  return;
 VAR_2->base_id = VAR_1->base_id;
 VAR_2->span += VAR_1->span;
 FUNC_1(&VAR_1->entry);
 FUNC_0(VAR_1);
}
