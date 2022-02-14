
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* src; void* obj; int cmd; int type; } ;
union hi6220_mbox_data {TYPE_1__ msg; } ;
struct hi6220_stub_clk {int mbox; int dfs_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,union hi6220_mbox_data*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hi6220_stub_clk *VAR_4,
    unsigned int VAR_5)
{
 union hi6220_mbox_data VAR_6;


 FUNC_1(VAR_4->dfs_map, VAR_0, VAR_5);


 VAR_6.msg.type = VAR_2;
 VAR_6.msg.cmd = VAR_1;
 VAR_6.msg.obj = VAR_3;
 VAR_6.msg.src = VAR_3;

 FUNC_0(VAR_4->mbox, &VAR_6);
 return 0;
}
