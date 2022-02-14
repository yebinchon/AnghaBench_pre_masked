
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct mm_struct*) ;
 scalar_t__ FUNC_1 (struct mm_struct*) ;

__attribute__((used)) static unsigned long FUNC_2(struct mm_struct *VAR_2,
  unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5 = VAR_3;

 if (FUNC_1(VAR_2)) {

  VAR_5 >>= 3;
  VAR_4 = VAR_1;
 } else {

  VAR_5 >>= 2;
  VAR_4 = VAR_0;
 }
 VAR_5 &= (VAR_4-1);




 VAR_5 *= FUNC_0(VAR_2);
 return VAR_5;
}
