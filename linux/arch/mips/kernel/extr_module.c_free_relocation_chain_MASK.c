
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_hi16 {struct mips_hi16* next; } ;


 int FUNC_0 (struct mips_hi16*) ;

__attribute__((used)) static void FUNC_1(struct mips_hi16 *VAR_0)
{
 struct mips_hi16 *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
