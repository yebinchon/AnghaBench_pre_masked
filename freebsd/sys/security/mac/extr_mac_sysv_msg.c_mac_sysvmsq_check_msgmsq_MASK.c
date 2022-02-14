
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct msqid_kernel {int label; } ;
struct msg {int label; } ;


 int FUNC_0 (int ,int,struct ucred*,struct msg*,struct msqid_kernel*) ;
 int FUNC_1 (int ,struct ucred*,struct msg*,int ,struct msqid_kernel*,int ) ;
 int VAR_0 ;

int
FUNC_2(struct ucred *VAR_1, struct msg *VAR_2,
 struct msqid_kernel *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_2->label, VAR_3, VAR_3->label);
 FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);

 return (VAR_4);
}
