
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io7 {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct io7 *VAR_0,
   volatile unsigned long *VAR_1,
   unsigned int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = *VAR_1;
 VAR_3 &= ~(0x1ffUL << 24);
 VAR_3 |= ((unsigned long)VAR_2 << 24);

 *VAR_1 = VAR_3;
 FUNC_0();
 *VAR_1;
}
