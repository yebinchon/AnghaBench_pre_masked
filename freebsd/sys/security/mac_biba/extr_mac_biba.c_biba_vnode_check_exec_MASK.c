
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;
struct image_params {int dummy; } ;


 int VAR_0 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_biba*,int ) ;
 int FUNC_2 (struct mac_biba*,struct mac_biba*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_2, struct vnode *VAR_3,
    struct label *VAR_4, struct image_params *VAR_5,
    struct label *VAR_6)
{
 struct mac_biba *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;

 if (VAR_6 != ((void*)0)) {





  VAR_9 = FUNC_0(VAR_6);
  VAR_10 = FUNC_1(VAR_9, 0);
  if (VAR_10)
   return (VAR_10);
 }

 if (!VAR_1)
  return (0);

 VAR_7 = FUNC_0(VAR_2->cr_label);
 VAR_8 = FUNC_0(VAR_4);

 if (!FUNC_2(VAR_8, VAR_7))
  return (VAR_0);

 return (0);
}
