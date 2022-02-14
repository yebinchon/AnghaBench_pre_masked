
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa_data {int bdfn; int phb_opal_id; } ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1(void *VAR_0, int VAR_1)
{
 struct spa_data *VAR_2 = (struct spa_data *) VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->phb_opal_id, VAR_2->bdfn, VAR_1);
 return VAR_3;
}
