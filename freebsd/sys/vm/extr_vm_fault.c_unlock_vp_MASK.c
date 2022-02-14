
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct faultstate {int * vp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct faultstate *VAR_0)
{

 if (VAR_0->vp != ((void*)0)) {
  FUNC_0(VAR_0->vp);
  VAR_0->vp = ((void*)0);
 }
}
