
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_protocol_driver {int dummy; } ;
struct stm_pdrv_entry {struct config_item_type* node_type; struct stm_protocol_driver* pdrv; } ;
struct config_item_type {int dummy; } ;


 int VAR_0 ;
 struct stm_pdrv_entry* FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct stm_protocol_driver*) ;
 int VAR_1 ;

int FUNC_4(const char *VAR_2,
   const struct stm_protocol_driver **VAR_3,
   const struct config_item_type **VAR_4)
{
 const struct stm_pdrv_entry *VAR_5;

 FUNC_1(&VAR_1);

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 && VAR_5->pdrv && FUNC_3(VAR_5->pdrv)) {
  *VAR_3 = VAR_5->pdrv;
  *VAR_4 = VAR_5->node_type;
 }

 FUNC_2(&VAR_1);

 return VAR_5 ? 0 : -VAR_0;
}
