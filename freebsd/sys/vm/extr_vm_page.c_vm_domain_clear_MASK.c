
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_domain {scalar_t__ vmd_free_count; scalar_t__ vmd_pageout_free_min; scalar_t__ vmd_pageout_pages_needed; int vmd_domain; scalar_t__ vmd_severeset; scalar_t__ vmd_minset; } ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct vm_domain*) ;
 int FUNC_4 (struct vm_domain*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__*) ;

void
FUNC_6(struct vm_domain *VAR_6)
{

 FUNC_1(&VAR_0);
 if (VAR_6->vmd_minset && !FUNC_3(VAR_6)) {
  VAR_6->vmd_minset = 0;
  FUNC_0(VAR_6->vmd_domain, &VAR_1);
  if (VAR_2 != 0) {
   VAR_2 = 0;
   FUNC_5(&VAR_1);
  }
 }
 if (VAR_6->vmd_severeset && !FUNC_4(VAR_6)) {
  VAR_6->vmd_severeset = 0;
  FUNC_0(VAR_6->vmd_domain, &VAR_4);
  if (VAR_5 != 0) {
   VAR_5 = 0;
   FUNC_5(&VAR_4);
  }
 }





 if (VAR_6->vmd_pageout_pages_needed &&
     VAR_6->vmd_free_count >= VAR_6->vmd_pageout_free_min) {
  FUNC_5(&VAR_6->vmd_pageout_pages_needed);
  VAR_6->vmd_pageout_pages_needed = 0;
 }


 if (VAR_3) {
  VAR_3 = 0;
  FUNC_5(&VAR_3);
 }
 FUNC_2(&VAR_0);
}
