
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct mm_struct*) ;

__attribute__((used)) static unsigned long FUNC_1(struct mm_struct *VAR_1,
          unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_2;
 int VAR_4;



 VAR_3 &= ~VAR_0;






 if (FUNC_0(VAR_1))
  VAR_4 = 8;
 else
  VAR_4 = 4;
 VAR_3 &= ~(VAR_4-1);
 return VAR_3;
}
