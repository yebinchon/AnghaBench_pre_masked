
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* FUNC_0 (int) ;
 int FUNC_1 (char*,int*,int,...) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int*) ;

__attribute__((used)) static void FUNC_4(int VAR_0, int VAR_1, int VAR_2)
{
 int *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_2(VAR_3);

 if (VAR_1) {
  int VAR_5 = (VAR_4 & ~VAR_1) | VAR_2;

  FUNC_1("UV:PCH: %p = %x & %x | %x (%x)\n",
   VAR_3, VAR_4, ~VAR_1, VAR_2, VAR_5);
  FUNC_3(VAR_5, VAR_3);
 } else if (VAR_4 & VAR_2) {
  FUNC_1("UV:PCH: %p = %x\n", VAR_3, VAR_2);
  FUNC_3(VAR_2, VAR_3);
 }

 (void)FUNC_2(VAR_3);
}
