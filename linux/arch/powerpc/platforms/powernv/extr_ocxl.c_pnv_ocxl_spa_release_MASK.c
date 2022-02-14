
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa_data {int bdfn; int phb_opal_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spa_data*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3(void *VAR_0)
{
 struct spa_data *VAR_1 = (struct spa_data *) VAR_0;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->phb_opal_id, VAR_1->bdfn, 0, 0);
 FUNC_0(VAR_2);
 FUNC_1(VAR_1);
}
