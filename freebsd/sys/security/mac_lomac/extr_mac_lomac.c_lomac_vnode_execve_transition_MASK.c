
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct TYPE_2__ {int mle_grade; int mle_type; } ;
struct mac_lomac {int ml_flags; TYPE_1__ ml_auxsingle; int ml_single; } ;
struct label {int dummy; } ;
struct image_params {int dummy; } ;


 int VAR_0 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 scalar_t__ FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (struct mac_lomac*,struct mac_lomac*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct mac_lomac*,int ,int ) ;
 int FUNC_6 (struct mac_lomac*,struct mac_lomac*,char*,char*,struct vnode*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct ucred *VAR_3, struct ucred *VAR_4,
    struct vnode *VAR_5, struct label *VAR_6, struct label *VAR_7,
    struct image_params *VAR_8, struct label *VAR_9)
{
 struct mac_lomac *VAR_10, *VAR_11, *VAR_12, *VAR_13;

 VAR_10 = FUNC_0(VAR_3->cr_label);
 VAR_11 = FUNC_0(VAR_4->cr_label);
 VAR_12 = FUNC_0(VAR_6);
 VAR_13 = VAR_7 != ((void*)0) ? FUNC_0(VAR_7) : VAR_12;

 FUNC_2(VAR_10, VAR_11);





 if (VAR_13->ml_flags & VAR_0 &&
     !FUNC_3(&VAR_13->ml_auxsingle, &VAR_11->ml_single)
     && FUNC_1(VAR_13, VAR_11))
  FUNC_5(VAR_11, VAR_13->ml_auxsingle.mle_type,
      VAR_13->ml_auxsingle.mle_grade);







 if (VAR_1 && VAR_2 &&
     !FUNC_4(VAR_12, VAR_10))
  (void)FUNC_6(VAR_10, VAR_12, "executing", "file", VAR_5);
}
