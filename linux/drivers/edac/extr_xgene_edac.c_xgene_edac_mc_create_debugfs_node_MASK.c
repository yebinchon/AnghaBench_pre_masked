
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int debugfs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,struct mem_ctl_info*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_3)
{
 if (!FUNC_0(VAR_0))
  return;

 if (!VAR_3->debugfs)
  return;

 FUNC_1("inject_ctrl", VAR_1, VAR_3->debugfs, VAR_3,
     &VAR_2);
}
