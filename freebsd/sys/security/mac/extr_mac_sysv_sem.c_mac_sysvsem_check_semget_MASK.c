
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct semid_kernel {int label; } ;


 int FUNC_0 (int ,struct ucred*,struct semid_kernel*,int ) ;
 int VAR_0 ;

int
FUNC_1(struct ucred *VAR_1, struct semid_kernel *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_2->label);

 return (VAR_3);
}
