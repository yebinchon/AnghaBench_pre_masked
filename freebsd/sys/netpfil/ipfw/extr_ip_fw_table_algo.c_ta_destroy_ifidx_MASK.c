
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct iftable_cfg {int ii; struct iftable_cfg* main_ptr; struct ip_fw_chain* ch; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iftable_cfg*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,struct ip_fw_chain*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, struct table_info *VAR_3)
{
 struct iftable_cfg *VAR_4;
 struct ip_fw_chain *VAR_5;

 VAR_4 = (struct iftable_cfg *)VAR_2;
 VAR_5 = VAR_4->ch;

 if (VAR_4->main_ptr != ((void*)0))
  FUNC_2(VAR_4->main_ptr, VAR_0);

 FUNC_0(VAR_5);
 FUNC_4(VAR_4->ii, VAR_1, VAR_5);
 FUNC_1(VAR_5);

 FUNC_3(VAR_4->ii);

 FUNC_2(VAR_4, VAR_0);
}
