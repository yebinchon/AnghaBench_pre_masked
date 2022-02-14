
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

void FUNC_7(struct vm_area_struct *VAR_6, unsigned long VAR_7, pte_t VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 FUNC_6(VAR_10);

 VAR_9 = FUNC_1(VAR_0);
 VAR_11 = (VAR_9 & VAR_1) >> VAR_3;
 VAR_9 &= ~VAR_4;




 FUNC_0(!--VAR_11);

 VAR_11 = VAR_11 % VAR_2;





 VAR_9 |= (VAR_11 << VAR_5);
 FUNC_2(VAR_9, VAR_0);
 FUNC_4();


 FUNC_3(VAR_6, VAR_7, VAR_8);


 VAR_9 = FUNC_1(VAR_0);

 VAR_9 &= ~VAR_1;
 VAR_9 |= (VAR_11 << VAR_3);

 FUNC_2(VAR_9, VAR_0);
 FUNC_4();

 FUNC_5(VAR_10);
}
