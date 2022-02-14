
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct vm_domain {int dummy; } ;
struct TYPE_2__ {int v_page_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (struct vm_domain*) ;
 int FUNC_7 (struct vm_domain*) ;
 int FUNC_8 (struct vm_domain*,int) ;
 struct vm_domain* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__,int ) ;

void
FUNC_12(vm_offset_t VAR_6, vm_size_t VAR_7)
{

 struct vm_domain *VAR_8;
 vm_offset_t VAR_9, VAR_10;
 vm_paddr_t VAR_11;
 vm_page_t VAR_12;

 VAR_9 = FUNC_5(VAR_6 + VAR_7);
 VAR_6 = FUNC_4(VAR_6);







 FUNC_1(VAR_6, VAR_9 - VAR_6, VAR_2);

 for (VAR_10 = VAR_6; VAR_10 < VAR_9; VAR_10 += VAR_1) {
  VAR_11 = FUNC_2(VAR_10);
  VAR_12 = FUNC_0(VAR_11);

  VAR_8 = FUNC_9(VAR_12);
  FUNC_6(VAR_8);
  FUNC_10(VAR_12, 0);
  FUNC_7(VAR_8);

  FUNC_8(VAR_8, 1);
  VAR_5.v_page_count++;
 }
 FUNC_3(VAR_4, VAR_6, VAR_9);
 (void)FUNC_11(VAR_3, VAR_6, VAR_9 - VAR_6, VAR_0);

}
