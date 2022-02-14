
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_tasklet_data {int completion; struct ccp_cmd* cmd; } ;
struct ccp_cmd {int ret; int data; int (* callback ) (int ,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct ccp_tasklet_data *VAR_1 = (struct ccp_tasklet_data *)VAR_0;
 struct ccp_cmd *VAR_2 = VAR_1->cmd;

 VAR_2->callback(VAR_2->data, VAR_2->ret);

 FUNC_0(&VAR_1->completion);
}
