
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int context; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (int *) ;
 unsigned char* FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned long) ;

unsigned int FUNC_7(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 unsigned char *VAR_2;
 int VAR_3, VAR_4;

 FUNC_2(FUNC_5());

 if (FUNC_6(VAR_1)) {
  VAR_2 = FUNC_4(&VAR_0->context);
  VAR_3 = FUNC_1(VAR_1);
 } else {
  VAR_2 = FUNC_3(&VAR_0->context);
  VAR_3 = FUNC_0(VAR_1);
 }
 VAR_4 = VAR_3 & 0x1;
 return (VAR_2[VAR_3 >> 1] >> (VAR_4 * 4)) & 0xf;
}
