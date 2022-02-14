
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(struct vm_area_struct *VAR_3,
      unsigned long VAR_4, unsigned long VAR_5)
{
 int VAR_6;
 bool VAR_7;
 bool VAR_8;

 VAR_7 = VAR_1;
 VAR_8 = VAR_2;

 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6 += VAR_0) {
  if (VAR_7)
   FUNC_0(VAR_6);
  else
   FUNC_1(VAR_6);

  if (VAR_8)
   FUNC_2(VAR_6);
  else
   FUNC_3(VAR_6);
 }
}
