
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_port {int mutex; } ;
struct se_portal_group {int dummy; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct srpt_port*,unsigned long) ;
 struct srpt_port* FUNC_5 (struct se_portal_group*) ;
 struct se_portal_group* FUNC_6 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_7(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct se_portal_group *VAR_4 = FUNC_6(VAR_1);
 struct srpt_port *VAR_5 = FUNC_5(VAR_4);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_3("Unable to extract srpt_tpg_store_enable\n");
  return -VAR_0;
 }

 if ((VAR_6 != 0) && (VAR_6 != 1)) {
  FUNC_3("Illegal value for srpt_tpg_store_enable: %lu\n", VAR_6);
  return -VAR_0;
 }

 FUNC_1(&VAR_5->mutex);
 FUNC_4(VAR_5, VAR_6);
 FUNC_2(&VAR_5->mutex);

 return VAR_3;
}
