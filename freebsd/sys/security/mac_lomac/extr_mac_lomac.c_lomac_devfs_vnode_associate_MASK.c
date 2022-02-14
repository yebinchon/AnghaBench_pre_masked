
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;
struct devfs_dirent {int dummy; } ;


 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;

__attribute__((used)) static void
FUNC_2(struct mount *VAR_0, struct label *VAR_1,
    struct devfs_dirent *VAR_2, struct label *VAR_3, struct vnode *VAR_4,
    struct label *VAR_5)
{
 struct mac_lomac *VAR_6, *VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = FUNC_0(VAR_5);

 FUNC_1(VAR_6, VAR_7);
}
