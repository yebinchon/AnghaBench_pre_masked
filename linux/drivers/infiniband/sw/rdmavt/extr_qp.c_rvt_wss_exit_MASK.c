
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_wss {struct rvt_wss* entries; } ;
struct rvt_dev_info {struct rvt_wss* wss; } ;


 int FUNC_0 (struct rvt_wss*) ;

void FUNC_1(struct rvt_dev_info *VAR_0)
{
 struct rvt_wss *VAR_1 = VAR_0->wss;

 if (!VAR_1)
  return;


 FUNC_0(VAR_1->entries);
 VAR_1->entries = ((void*)0);
 FUNC_0(VAR_0->wss);
 VAR_0->wss = ((void*)0);
}
