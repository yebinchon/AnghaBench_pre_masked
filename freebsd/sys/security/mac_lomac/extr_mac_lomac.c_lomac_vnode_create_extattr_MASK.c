
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {int mle_grade; int mle_type; } ;
struct mac_lomac {int ml_flags; TYPE_1__ ml_auxsingle; } ;
struct label {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,size_t) ;
 int VAR_4 ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_3 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_4 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_5 (struct mac_lomac*,int ,int ) ;
 int FUNC_6 (struct vnode*,int ,int ,int ,size_t,char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct ucred *VAR_5, struct mount *VAR_6,
    struct label *VAR_7, struct vnode *VAR_8, struct label *VAR_9,
    struct vnode *VAR_10, struct label *VAR_11, struct componentname *VAR_12)
{
 struct mac_lomac *VAR_13, *VAR_14, *VAR_15, VAR_16;
 size_t VAR_17;
 int VAR_18;

 VAR_17 = sizeof(VAR_16);
 FUNC_1(&VAR_16, VAR_17);

 VAR_13 = FUNC_0(VAR_5->cr_label);
 VAR_14 = FUNC_0(VAR_11);
 VAR_15 = FUNC_0(VAR_9);
 if (VAR_15->ml_flags & VAR_3) {
  FUNC_3(VAR_15, &VAR_16);
  FUNC_5(&VAR_16, VAR_15->ml_auxsingle.mle_type,
      VAR_15->ml_auxsingle.mle_grade);
 } else {
  FUNC_4(VAR_13, &VAR_16);
 }

 VAR_18 = FUNC_6(VAR_10, VAR_0, VAR_2,
     VAR_1, VAR_17, (char *)&VAR_16, VAR_4);
 if (VAR_18 == 0)
  FUNC_2(&VAR_16, VAR_14);
 return (VAR_18);
}
