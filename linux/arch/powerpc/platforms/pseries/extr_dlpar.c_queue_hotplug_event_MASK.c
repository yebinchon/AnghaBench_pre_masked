
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct pseries_hp_work {struct pseries_hp_errorlog* errlog; } ;
struct pseries_hp_errorlog {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct work_struct*,int ) ;
 int FUNC_1 (struct pseries_hp_errorlog*) ;
 struct pseries_hp_work* FUNC_2 (int,int ) ;
 struct pseries_hp_errorlog* FUNC_3 (struct pseries_hp_errorlog*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,struct work_struct*) ;

void FUNC_5(struct pseries_hp_errorlog *VAR_3)
{
 struct pseries_hp_work *VAR_4;
 struct pseries_hp_errorlog *VAR_5;

 VAR_5 = FUNC_3(VAR_3, sizeof(*VAR_3), VAR_0);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_2(sizeof(struct pseries_hp_work), VAR_0);
 if (VAR_4) {
  FUNC_0((struct work_struct *)VAR_4, VAR_1);
  VAR_4->errlog = VAR_5;
  FUNC_4(VAR_2, (struct work_struct *)VAR_4);
 } else {
  FUNC_1(VAR_5);
 }
}
