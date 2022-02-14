
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct mac_mls {int mm_flags; } ;
struct label {int dummy; } ;
typedef int mm_temp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,int) ;
 int VAR_8 ;
 int FUNC_2 (struct mac_mls*,struct mac_mls*) ;
 scalar_t__ FUNC_3 (struct mac_mls*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct vnode*,int ,int ,int ,int*,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct mount *VAR_9, struct label *VAR_10,
    struct vnode *VAR_11, struct label *VAR_12)
{
 struct mac_mls VAR_13, *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 VAR_14 = FUNC_0(VAR_10);
 VAR_15 = FUNC_0(VAR_12);

 VAR_16 = sizeof(VAR_13);
 FUNC_1(&VAR_13, VAR_16);

 VAR_17 = FUNC_5(VAR_11, VAR_3, VAR_5,
     VAR_4, &VAR_16, (char *) &VAR_13, VAR_8);
 if (VAR_17 == VAR_0 || VAR_17 == VAR_1) {

  FUNC_2(VAR_14, VAR_15);
  return (0);
 } else if (VAR_17)
  return (VAR_17);

 if (VAR_16 != sizeof(VAR_13)) {
  FUNC_4("mls_vnode_associate_extattr: bad size %d\n", VAR_16);
  return (VAR_2);
 }
 if (FUNC_3(&VAR_13) != 0) {
  FUNC_4("mls_vnode_associate_extattr: invalid\n");
  return (VAR_2);
 }
 if ((VAR_13.mm_flags & VAR_6) !=
     VAR_7) {
  FUNC_4("mls_associated_vnode_extattr: not effective\n");
  return (VAR_2);
 }

 FUNC_2(&VAR_13, VAR_15);
 return (0);
}
