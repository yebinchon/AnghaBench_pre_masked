
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int check_info; } ;
typedef TYPE_1__ sal_log_mod_error_info_t ;
typedef int peidx_table_t ;
struct TYPE_4__ {scalar_t__ op; scalar_t__ itc; scalar_t__ dtc; scalar_t__ itr; } ;
typedef TYPE_2__ pal_tlb_check_info_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(peidx_table_t *VAR_1)
{
 sal_log_mod_error_info_t *VAR_2;
 pal_tlb_check_info_t *VAR_3;

 VAR_2 = (sal_log_mod_error_info_t *)FUNC_2(VAR_1, 0);
 VAR_3 = (pal_tlb_check_info_t *)&(VAR_2->check_info);





 if (VAR_3->op == VAR_0
     && !(VAR_3->itr || VAR_3->dtc || VAR_3->itc))
  return FUNC_0("Duplicate TLB entry");

 return FUNC_1("TLB check recovered");
}
