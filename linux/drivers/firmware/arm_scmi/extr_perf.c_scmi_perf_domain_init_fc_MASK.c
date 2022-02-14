
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_handle {int dev; } ;
struct scmi_fc_info {int limit_get_addr; int limit_set_db; int limit_set_addr; int level_get_addr; int level_set_db; int level_set_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct scmi_fc_info* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct scmi_handle const*,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(const struct scmi_handle *VAR_5,
         u32 VAR_6, struct scmi_fc_info **VAR_7)
{
 struct scmi_fc_info *VAR_8;

 VAR_8 = FUNC_0(VAR_5->dev, sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return;

 FUNC_1(VAR_5, VAR_6, VAR_2,
     &VAR_8->level_set_addr, &VAR_8->level_set_db);
 FUNC_1(VAR_5, VAR_6, VAR_1,
     &VAR_8->level_get_addr, ((void*)0));
 FUNC_1(VAR_5, VAR_6, VAR_4,
     &VAR_8->limit_set_addr, &VAR_8->limit_set_db);
 FUNC_1(VAR_5, VAR_6, VAR_3,
     &VAR_8->limit_get_addr, ((void*)0));
 *VAR_7 = VAR_8;
}
