
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct mount {int mnt_label; } ;


 int FUNC_0 (int ,int,struct ucred*,struct mount*) ;
 int FUNC_1 (int ,struct ucred*,struct mount*,int ) ;
 int VAR_0 ;

int
FUNC_2(struct ucred *VAR_1, struct mount *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_2->mnt_label);
 FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);

 return (VAR_3);
}
