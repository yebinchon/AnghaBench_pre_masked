
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_0;
 int VAR_6 = VAR_1;

 if (VAR_3) {
  int VAR_7 = (int) VAR_0;
  if (VAR_7 < 0)
   VAR_7 = -VAR_7;
  VAR_0 = (unsigned int) VAR_7;
  VAR_1--;
 }
 if (VAR_0 & ~((1U << VAR_1) - 1U)) {
  FUNC_0("VM ERROR: immediate value 0x%08x out of %d bit range\n",
      VAR_5, VAR_6);
  FUNC_1("sparc VM bug");
 }
}
