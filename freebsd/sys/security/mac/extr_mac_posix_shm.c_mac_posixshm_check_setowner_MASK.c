
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct ucred {int dummy; } ;
struct shmfd {int shm_label; } ;
typedef int gid_t ;


 int FUNC_0 (int ,int,struct ucred*,struct shmfd*,int ,int ) ;
 int FUNC_1 (int ,struct ucred*,struct shmfd*,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_2(struct ucred *VAR_1, struct shmfd *VAR_2, uid_t VAR_3,
    gid_t VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_2->shm_label, VAR_3, VAR_4);
 FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2,
     VAR_3, VAR_4);

 return (VAR_5);
}
