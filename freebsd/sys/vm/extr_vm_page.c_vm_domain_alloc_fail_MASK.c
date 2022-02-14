
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_object_t ;
typedef int u_int ;
struct vm_domain {int vmd_domain; int vmd_pageout_deficit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct vm_domain*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct vm_domain *VAR_4, vm_object_t VAR_5, int VAR_6)
{

 FUNC_4(VAR_4);

 FUNC_2(&VAR_4->vmd_pageout_deficit,
     FUNC_3((u_int)VAR_6 >> VAR_1, 1));
 if (VAR_6 & (VAR_3 | VAR_2)) {
  if (VAR_5 != ((void*)0))
   FUNC_1(VAR_5);
  FUNC_5(VAR_4->vmd_domain);
  if (VAR_5 != ((void*)0))
   FUNC_0(VAR_5);
  if (VAR_6 & VAR_3)
   return (VAR_0);
 }

 return (0);
}
