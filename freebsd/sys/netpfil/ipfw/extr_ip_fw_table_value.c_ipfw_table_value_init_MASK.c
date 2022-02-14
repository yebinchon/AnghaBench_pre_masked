
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tables_config {int val_size; int valhash; } ;
struct table_value {int dummy; } ;
struct ip_fw_chain {struct tables_config* tblcfg; int valuestate; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int ,int) ;
 int VAR_6 ;

void
FUNC_4(struct ip_fw_chain *VAR_7, int VAR_8)
{
 struct tables_config *VAR_9;

 VAR_7->valuestate = FUNC_3(VAR_3 * sizeof(struct table_value),
     VAR_0, VAR_1 | VAR_2);

 VAR_9 = VAR_7->tblcfg;

 VAR_9->val_size = VAR_3;
 VAR_9->valhash = FUNC_1(VAR_9->val_size);
 FUNC_2(VAR_9->valhash, VAR_5,
     VAR_4);

 FUNC_0(VAR_8, VAR_6);
}
