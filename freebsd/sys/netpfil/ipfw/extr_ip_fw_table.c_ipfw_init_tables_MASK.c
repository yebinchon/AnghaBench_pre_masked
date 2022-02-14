
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tables_config {int namehash; } ;
struct table_info {int dummy; } ;
struct ip_fw_chain {struct tables_config* tblcfg; void* tablestate; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*,int) ;
 void* FUNC_5 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_6(struct ip_fw_chain *VAR_6, int VAR_7)
{
 struct tables_config *VAR_8;


 VAR_6->tablestate = FUNC_5(VAR_3 * sizeof(struct table_info),
     VAR_0, VAR_1 | VAR_2);

 VAR_8 = FUNC_5(sizeof(struct tables_config), VAR_0, VAR_1 | VAR_2);
 VAR_8->namehash = FUNC_2(VAR_3);
 VAR_6->tblcfg = VAR_8;

 FUNC_4(VAR_6, VAR_7);
 FUNC_3(VAR_6);

 FUNC_0(VAR_7, VAR_4);
 FUNC_1(VAR_7, VAR_5);
 return (0);
}
