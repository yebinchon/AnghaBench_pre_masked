
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mount {int dummy; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;
struct componentname {int dummy; } ;
typedef int mm_temp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,size_t) ;
 int VAR_3 ;
 int FUNC_2 (struct mac_mls*,struct mac_mls*) ;
 int FUNC_3 (struct vnode*,int ,int ,int ,size_t,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_4, struct mount *VAR_5,
    struct label *VAR_6, struct vnode *VAR_7, struct label *VAR_8,
    struct vnode *VAR_9, struct label *VAR_10, struct componentname *VAR_11)
{
 struct mac_mls *VAR_12, *VAR_13, VAR_14;
 size_t VAR_15;
 int VAR_16;

 VAR_15 = sizeof(VAR_14);
 FUNC_1(&VAR_14, VAR_15);

 VAR_12 = FUNC_0(VAR_4->cr_label);
 VAR_13 = FUNC_0(VAR_10);
 FUNC_2(VAR_12, &VAR_14);

 VAR_16 = FUNC_3(VAR_9, VAR_0, VAR_2,
     VAR_1, VAR_15, (char *) &VAR_14, VAR_3);
 if (VAR_16 == 0)
  FUNC_2(VAR_12, VAR_13);
 return (VAR_16);
}
