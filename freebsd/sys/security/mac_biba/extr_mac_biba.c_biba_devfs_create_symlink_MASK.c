
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct mount {int dummy; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;
struct devfs_dirent {int dummy; } ;


 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;

__attribute__((used)) static void
FUNC_2(struct ucred *VAR_0, struct mount *VAR_1,
    struct devfs_dirent *VAR_2, struct label *VAR_3, struct devfs_dirent *VAR_4,
    struct label *VAR_5)
{
 struct mac_biba *VAR_6, *VAR_7;

 VAR_6 = FUNC_0(VAR_0->cr_label);
 VAR_7 = FUNC_0(VAR_5);

 FUNC_1(VAR_6, VAR_7);
}
