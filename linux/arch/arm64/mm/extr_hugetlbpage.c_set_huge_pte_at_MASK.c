
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pgprot_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *,size_t,int) ;
 int FUNC_2 (struct mm_struct*,unsigned long,int *,size_t*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mm_struct*,unsigned long,int *,int ) ;

void FUNC_9(struct mm_struct *VAR_1, unsigned long VAR_2,
       pte_t *VAR_3, pte_t VAR_4)
{
 size_t VAR_5;
 int VAR_6;
 int VAR_7;
 unsigned long VAR_8, VAR_9;
 pgprot_t VAR_10;





 FUNC_0(!FUNC_7(VAR_4));

 if (!FUNC_4(VAR_4)) {
  FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4);
  return;
 }

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_5);
 VAR_8 = FUNC_5(VAR_4);
 VAR_9 = VAR_5 >> VAR_0;
 VAR_10 = FUNC_6(VAR_4);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_7);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_3++, VAR_2 += VAR_5, VAR_8 += VAR_9)
  FUNC_8(VAR_1, VAR_2, VAR_3, FUNC_3(VAR_8, VAR_10));
}
