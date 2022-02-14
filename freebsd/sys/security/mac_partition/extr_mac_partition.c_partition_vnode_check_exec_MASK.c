
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct label {int dummy; } ;
struct image_params {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct label*) ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_1, struct vnode *VAR_2,
    struct label *VAR_3, struct image_params *VAR_4,
    struct label *VAR_5)
{

 if (VAR_5 != ((void*)0)) {





  if (FUNC_0(VAR_5) != 0)
   return (VAR_0);
 }

 return (0);
}
