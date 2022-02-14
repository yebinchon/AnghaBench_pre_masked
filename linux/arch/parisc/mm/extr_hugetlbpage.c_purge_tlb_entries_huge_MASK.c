
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct mm_struct *VAR_4, unsigned long VAR_5)
{
 int VAR_6;



 FUNC_0(VAR_2 > VAR_1);

 VAR_5 &= VAR_0;
 VAR_5 |= VAR_3;

 for (VAR_6 = 0; VAR_6 < (1 << (VAR_1-VAR_2)); VAR_6++) {
  FUNC_1(VAR_4, VAR_5);
  VAR_5 += (1UL << VAR_2);
 }
}
