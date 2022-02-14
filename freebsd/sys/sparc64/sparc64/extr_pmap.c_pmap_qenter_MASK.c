
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;

void
FUNC_5(vm_offset_t VAR_4, vm_page_t *VAR_5, int VAR_6)
{
 vm_offset_t VAR_7;

 FUNC_0(VAR_2);
 VAR_7 = VAR_4;
 FUNC_2(&VAR_3);
 while (VAR_6-- > 0) {
  FUNC_1(VAR_7, *VAR_5);
  VAR_7 += VAR_0;
  VAR_5++;
 }
 FUNC_3(&VAR_3);
 FUNC_4(VAR_1, VAR_4, VAR_7);
}
