
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_domain {scalar_t__ vmd_free_count; scalar_t__ vmd_pageout_free_min; int vmd_pageout_pages_needed; int vmd_domain; } ;
typedef int domainset_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vm_domain* FUNC_2 (int) ;
 int * VAR_2 ;
 int FUNC_3 (int*,int *,int,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct vm_domain*) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;

void
FUNC_9(int VAR_5)
{
 struct vm_domain *VAR_6;
 domainset_t VAR_7;

 VAR_6 = FUNC_2(VAR_5);
 FUNC_7(VAR_6);

 if (VAR_2 == VAR_3) {
  FUNC_4(&VAR_4);
  if (VAR_6->vmd_free_count < VAR_6->vmd_pageout_free_min) {
   VAR_6->vmd_pageout_pages_needed = 1;
   FUNC_3(&VAR_6->vmd_pageout_pages_needed,
       &VAR_4, VAR_0 | VAR_1, "VMWait", 0);
  } else
   FUNC_5(&VAR_4);
 } else {
  if (VAR_3 == ((void*)0))
   FUNC_6("vm_wait in early boot");
  FUNC_1(&VAR_7);
  FUNC_0(VAR_6->vmd_domain, &VAR_7);
  FUNC_8(&VAR_7);
 }
}
