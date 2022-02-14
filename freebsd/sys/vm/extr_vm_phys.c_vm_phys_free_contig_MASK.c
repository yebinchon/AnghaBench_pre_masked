
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
typedef scalar_t__ u_long ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;

void
FUNC_5(vm_page_t VAR_1, u_long VAR_2)
{
 int VAR_3, VAR_4;
 vm_page_t VAR_5, VAR_6;

 FUNC_1(FUNC_2(VAR_1));

 VAR_5 = VAR_1;
 VAR_3 = FUNC_0(VAR_5);
 if (VAR_3 < VAR_0 - 1)
  VAR_5 += 1 << VAR_3;
 VAR_6 = VAR_1 + VAR_2;
 VAR_4 = FUNC_0(VAR_6);
 if (VAR_4 < VAR_0 - 1)
  VAR_6 -= 1 << VAR_4;




 if (VAR_5 < VAR_6)
  FUNC_3(VAR_5, VAR_6 - VAR_5);
 if (VAR_3 < VAR_0 - 1)
  FUNC_4(VAR_1, VAR_3);
 if (VAR_4 < VAR_0 - 1)
  FUNC_4(VAR_6, VAR_4);
}
