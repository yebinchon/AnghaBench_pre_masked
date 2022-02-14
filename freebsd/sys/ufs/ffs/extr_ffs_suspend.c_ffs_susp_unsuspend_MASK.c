
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufsmount {int um_flags; } ;
struct mount {int mnt_susp_owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufsmount*) ;
 int FUNC_1 (struct ufsmount*) ;
 int VAR_1 ;
 struct ufsmount* FUNC_2 (struct mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*,int ) ;

__attribute__((used)) static void
FUNC_6(struct mount *VAR_4)
{
 struct ufsmount *VAR_5;

 FUNC_3(&VAR_3, VAR_0);
 VAR_4->mnt_susp_owner = VAR_2;

 FUNC_5(VAR_4, 0);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_5);
 VAR_5->um_flags &= ~VAR_1;
 FUNC_1(VAR_5);
 FUNC_4(VAR_4);
}
