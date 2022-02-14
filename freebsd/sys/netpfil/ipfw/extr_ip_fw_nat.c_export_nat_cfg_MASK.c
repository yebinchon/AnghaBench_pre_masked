
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat44_cfg_nat {int if_name; int mode; int redir_cnt; int ip; int name; } ;
struct cfg_nat {int id; int if_name; int mode; int redir_cnt; int ip; } ;


 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct cfg_nat *VAR_0, struct nat44_cfg_nat *VAR_1)
{

 FUNC_0(VAR_1->name, sizeof(VAR_1->name), "%d", VAR_0->id);
 VAR_1->ip = VAR_0->ip;
 VAR_1->redir_cnt = VAR_0->redir_cnt;
 VAR_1->mode = VAR_0->mode;
 FUNC_1(VAR_1->if_name, VAR_0->if_name, sizeof(VAR_1->if_name));
}
