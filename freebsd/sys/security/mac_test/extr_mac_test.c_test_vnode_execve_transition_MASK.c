
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct label {int dummy; } ;
struct image_params {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct label*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct ucred *VAR_3, struct ucred *VAR_4,
    struct vnode *VAR_5, struct label *VAR_6,
    struct label *VAR_7, struct image_params *VAR_8,
    struct label *VAR_9)
{

 FUNC_1(VAR_3->cr_label, VAR_0);
 FUNC_1(VAR_4->cr_label, VAR_0);
 FUNC_1(VAR_6, VAR_1);
 FUNC_1(VAR_7, VAR_1);
 FUNC_1(VAR_9, VAR_0);
 FUNC_0(VAR_2);
}
