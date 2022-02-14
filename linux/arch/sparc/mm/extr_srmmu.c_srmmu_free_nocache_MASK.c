
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,unsigned long,...) ;
 unsigned long VAR_2 ;
 int VAR_3 ;

void FUNC_4(void *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = (unsigned long)VAR_4;
 if (VAR_6 < VAR_1) {
  FUNC_3("Vaddr %lx is smaller than nocache base 0x%lx\n",
      VAR_6, (unsigned long)VAR_1);
  FUNC_0();
 }
 if (VAR_6 + VAR_5 > VAR_2) {
  FUNC_3("Vaddr %lx is bigger than nocache end 0x%lx\n",
      VAR_6, VAR_2);
  FUNC_0();
 }
 if (!FUNC_2(VAR_5)) {
  FUNC_3("Size 0x%x is not a power of 2\n", VAR_5);
  FUNC_0();
 }
 if (VAR_5 < VAR_0) {
  FUNC_3("Size 0x%x is too small\n", VAR_5);
  FUNC_0();
 }
 if (VAR_6 & (VAR_5 - 1)) {
  FUNC_3("Vaddr %lx is not aligned to size 0x%x\n", VAR_6, VAR_5);
  FUNC_0();
 }

 VAR_7 = (VAR_6 - VAR_1) >> VAR_0;
 VAR_5 = VAR_5 >> VAR_0;

 FUNC_1(&VAR_3, VAR_7, VAR_5);
}
