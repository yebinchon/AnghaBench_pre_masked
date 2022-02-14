
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;
typedef int pgprot_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,unsigned long,int *,size_t*) ;
 int FUNC_2 (int ,unsigned long,int *,size_t,int) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,int *,int ,int) ;
 int FUNC_12 (int ,unsigned long,int *,int ) ;

int FUNC_13(struct vm_area_struct *VAR_1,
          unsigned long VAR_2, pte_t *VAR_3,
          pte_t VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 size_t VAR_8 = 0;
 unsigned long VAR_9 = FUNC_8(VAR_4), VAR_10;
 pgprot_t VAR_11;
 pte_t VAR_12;

 if (!FUNC_4(VAR_4))
  return FUNC_11(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_1(VAR_1->vm_mm, VAR_2, VAR_3, &VAR_8);
 VAR_10 = VAR_8 >> VAR_0;

 if (!FUNC_0(VAR_3, VAR_4, VAR_6))
  return 0;

 VAR_12 = FUNC_2(VAR_1->vm_mm, VAR_2, VAR_3, VAR_8, VAR_6);


 if (FUNC_5(VAR_12))
  VAR_4 = FUNC_6(VAR_4);

 if (FUNC_10(VAR_12))
  VAR_4 = FUNC_7(VAR_4);

 VAR_11 = FUNC_9(VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++, VAR_3++, VAR_2 += VAR_8, VAR_9 += VAR_10)
  FUNC_12(VAR_1->vm_mm, VAR_2, VAR_3, FUNC_3(VAR_9, VAR_11));

 return 1;
}
