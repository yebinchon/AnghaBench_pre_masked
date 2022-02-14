
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct shmid_kernel {int label; } ;


 int FUNC_0 (int ,int,struct ucred*,struct shmid_kernel*,int) ;
 int FUNC_1 (int ,struct ucred*,struct shmid_kernel*,int ,int) ;
 int VAR_0 ;

int
FUNC_2(struct ucred *VAR_1, struct shmid_kernel *VAR_2,
    int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_2->label, VAR_3);
 FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);

 return (VAR_4);
}
