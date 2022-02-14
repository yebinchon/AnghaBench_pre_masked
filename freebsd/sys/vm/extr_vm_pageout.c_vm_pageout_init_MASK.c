
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct vm_domain {scalar_t__ vmd_free_count; scalar_t__ vmd_free_severe; scalar_t__ vmd_interrupt_free_min; scalar_t__ vmd_pageout_free_min; scalar_t__ vmd_inactive_target; scalar_t__ vmd_free_min; scalar_t__ vmd_free_target; scalar_t__ vmd_free_reserved; } ;
struct TYPE_2__ {int v_page_count; int v_free_severe; int v_interrupt_free_min; int v_pageout_free_min; int v_inactive_target; int v_free_min; int v_free_target; int v_free_reserved; } ;


 struct vm_domain* FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{
 u_int VAR_5;
 int VAR_6;




 if (VAR_0.v_page_count < 2000)
  VAR_3 = 8;

 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct vm_domain *VAR_7;

  FUNC_1(VAR_6);
  VAR_7 = FUNC_0(VAR_6);
  VAR_0.v_free_reserved += VAR_7->vmd_free_reserved;
  VAR_0.v_free_target += VAR_7->vmd_free_target;
  VAR_0.v_free_min += VAR_7->vmd_free_min;
  VAR_0.v_inactive_target += VAR_7->vmd_inactive_target;
  VAR_0.v_pageout_free_min += VAR_7->vmd_pageout_free_min;
  VAR_0.v_interrupt_free_min += VAR_7->vmd_interrupt_free_min;
  VAR_0.v_free_severe += VAR_7->vmd_free_severe;
  VAR_5 += VAR_7->vmd_free_count;
 }






 if (VAR_4 == 0)
  VAR_4 = 600;

 if (VAR_2 == 0)
  VAR_2 = VAR_5 / 3;
}
