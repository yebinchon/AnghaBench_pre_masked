
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct msqid_kernel {int label; } ;
struct msg {int label; } ;


 int FUNC_0 (int ,struct ucred*,struct msqid_kernel*,int ,struct msg*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct ucred *VAR_1, struct msqid_kernel *VAR_2,
    struct msg *VAR_3)
{

 FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_2->label, VAR_3, VAR_3->label);
}
