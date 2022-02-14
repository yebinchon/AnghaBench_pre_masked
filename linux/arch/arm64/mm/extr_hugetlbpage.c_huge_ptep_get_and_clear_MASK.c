
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (struct mm_struct*,unsigned long,int *,size_t*) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *,size_t,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*,unsigned long,int *) ;

pte_t FUNC_5(struct mm_struct *VAR_0,
         unsigned long VAR_1, pte_t *VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 pte_t VAR_5 = FUNC_2(VAR_2);

 if (!FUNC_3(VAR_5))
  return FUNC_4(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4);

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
}
