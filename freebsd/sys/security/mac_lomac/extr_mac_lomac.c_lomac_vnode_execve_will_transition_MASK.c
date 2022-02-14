
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_lomac {int ml_flags; int ml_single; int ml_auxsingle; } ;
struct label {int dummy; } ;
struct image_params {int dummy; } ;


 int VAR_0 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 scalar_t__ FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_3, struct vnode *VAR_4,
    struct label *VAR_5, struct label *VAR_6,
    struct image_params *VAR_7, struct label *VAR_8)
{
 struct mac_lomac *VAR_9, *VAR_10, *VAR_11;

 if (!VAR_1 || !VAR_2)
  return (0);

 VAR_9 = FUNC_0(VAR_3->cr_label);
 VAR_10 = FUNC_0(VAR_5);
 VAR_11 = VAR_6 != ((void*)0) ? FUNC_0(VAR_6) : VAR_10;

 return ((VAR_11->ml_flags & VAR_0 &&
     !FUNC_2(&VAR_11->ml_auxsingle, &VAR_9->ml_single)
     && FUNC_1(VAR_11, VAR_9)) ||
     !FUNC_3(VAR_10, VAR_9));
}
