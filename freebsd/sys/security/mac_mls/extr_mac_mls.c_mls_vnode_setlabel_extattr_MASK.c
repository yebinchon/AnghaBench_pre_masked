
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct mac_mls {int mm_flags; } ;
struct label {int dummy; } ;
typedef int mm_temp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,size_t) ;
 int VAR_4 ;
 int FUNC_2 (struct mac_mls*,struct mac_mls*) ;
 int FUNC_3 (struct vnode*,int ,int ,int ,size_t,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_5, struct vnode *VAR_6,
    struct label *VAR_7, struct label *VAR_8)
{
 struct mac_mls *VAR_9, VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_11 = sizeof(VAR_10);
 FUNC_1(&VAR_10, VAR_11);

 VAR_9 = FUNC_0(VAR_8);
 if ((VAR_9->mm_flags & VAR_3) == 0)
  return (0);

 FUNC_2(VAR_9, &VAR_10);

 VAR_12 = FUNC_3(VAR_6, VAR_0, VAR_2,
     VAR_1, VAR_11, (char *) &VAR_10, VAR_4);
 return (VAR_12);
}
