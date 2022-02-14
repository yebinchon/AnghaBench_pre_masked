
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_protocol_driver {scalar_t__ policy_attr; int name; } ;
struct stm_pdrv_entry {struct stm_protocol_driver const* pdrv; int entry; int node_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct stm_pdrv_entry*) ;
 struct stm_pdrv_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_7(const struct stm_protocol_driver *VAR_5)
{
 struct stm_pdrv_entry *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_1;

 FUNC_5(&VAR_4);

 if (FUNC_0(VAR_5->name)) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto unlock;

 if (VAR_5->policy_attr) {
  VAR_6->node_type = FUNC_1(VAR_5->policy_attr);
  if (!VAR_6->node_type)
   goto unlock;
 }

 FUNC_4(&VAR_6->entry, &VAR_3);
 VAR_6->pdrv = VAR_5;

 VAR_7 = 0;
unlock:
 FUNC_6(&VAR_4);

 if (VAR_7)
  FUNC_2(VAR_6);

 return VAR_7;
}
