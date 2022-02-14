
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 unsigned long long VAR_0 ;
 unsigned long FUNC_0 (unsigned int,int ) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{


 unsigned int VAR_3 = FUNC_4();
 unsigned long long VAR_4, VAR_5;
 unsigned long VAR_6 = 0;
 unsigned long VAR_7, VAR_8;
 VAR_4 = VAR_2;
 VAR_5 = VAR_4 + VAR_0;
 VAR_7 = FUNC_1();
 VAR_8 = FUNC_0(VAR_3, VAR_1->vm_mm);
 if (VAR_7 != VAR_8) {
  FUNC_3(VAR_6);
  FUNC_5(VAR_8);
 }
 while (VAR_4 < VAR_5) {

  __asm__ __volatile__("icbi %0,  0" : : "r" (VAR_4));
  __asm__ __volatile__("icbi %0, 32" : : "r" (VAR_4));
  __asm__ __volatile__("icbi %0, 64" : : "r" (VAR_4));
  __asm__ __volatile__("icbi %0, 96" : : "r" (VAR_4));
  VAR_4 += 128;
 }
 if (VAR_7 != VAR_8) {
  FUNC_5(VAR_7);
  FUNC_2(VAR_6);
 }
}
