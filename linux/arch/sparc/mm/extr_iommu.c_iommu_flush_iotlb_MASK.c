
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iopte_t ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(iopte_t *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;

 VAR_6 = (unsigned long)VAR_4;
 VAR_7 = FUNC_0(VAR_6 + VAR_5*sizeof(iopte_t));
 VAR_6 &= VAR_0;
 if (VAR_3) {
  while(VAR_6 < VAR_7) {
   FUNC_3(VAR_6);
   VAR_6 += VAR_1;
  }
 } else if (VAR_2) {
  while(VAR_6 < VAR_7) {
   FUNC_2(VAR_6);
   VAR_6 += VAR_1;
  }
 } else {
  while(VAR_6 < VAR_7) {
   FUNC_1(VAR_6);
   VAR_6 += VAR_1;
  }
 }
}
