
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint8_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3, vm_size_t VAR_4, uint8_t VAR_5)
{
 vm_offset_t VAR_6, VAR_7;
 vm_paddr_t VAR_8;
 vm_page_t VAR_9;

 FUNC_0(VAR_4 == (VAR_2+1)*VAR_1);
 VAR_6 = (vm_offset_t)VAR_3;
 for (VAR_7 = VAR_6; VAR_7 < VAR_6 + VAR_4; VAR_7 += VAR_1) {
  VAR_8 = FUNC_3(VAR_7);
  VAR_9 = FUNC_1(VAR_8);
  FUNC_6(VAR_9);
  FUNC_5(VAR_9);
 }
 FUNC_4(VAR_6, VAR_4 >> VAR_0);
 FUNC_2(VAR_6, VAR_4);
}
