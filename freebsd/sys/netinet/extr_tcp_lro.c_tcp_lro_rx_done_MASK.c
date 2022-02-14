
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lro_entry {int dummy; } ;
struct lro_ctrl {int lro_active; } ;


 struct lro_entry* FUNC_0 (int *) ;
 int FUNC_1 (struct lro_entry*) ;
 int FUNC_2 (struct lro_ctrl*,struct lro_entry*) ;

__attribute__((used)) static void
FUNC_3(struct lro_ctrl *VAR_0)
{
 struct lro_entry *VAR_1;

 while ((VAR_1 = FUNC_0(&VAR_0->lro_active)) != ((void*)0)) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_0, VAR_1);
 }
}
