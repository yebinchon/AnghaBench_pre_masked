
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mount {int dummy; } ;
struct label {int dummy; } ;
struct componentname {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct label*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_4, struct mount *VAR_5,
    struct label *VAR_6, struct vnode *VAR_7, struct label *VAR_8,
    struct vnode *VAR_9, struct label *VAR_10, struct componentname *VAR_11)
{

 FUNC_1(VAR_4->cr_label, VAR_0);
 FUNC_1(VAR_6, VAR_1);
 FUNC_1(VAR_8, VAR_2);
 FUNC_0(VAR_3);

 return (0);
}
