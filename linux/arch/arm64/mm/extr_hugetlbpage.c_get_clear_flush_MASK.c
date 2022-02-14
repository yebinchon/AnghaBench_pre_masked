
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 struct vm_area_struct FUNC_0 (struct mm_struct*,int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct mm_struct*,unsigned long,int *) ;

__attribute__((used)) static pte_t FUNC_9(struct mm_struct *VAR_0,
        unsigned long VAR_1,
        pte_t *VAR_2,
        unsigned long VAR_3,
        unsigned long VAR_4)
{
 pte_t VAR_5 = FUNC_2(VAR_2);
 bool VAR_6 = FUNC_6(VAR_5);
 unsigned long VAR_7, VAR_8 = VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_1 += VAR_3, VAR_2++) {
  pte_t VAR_9 = FUNC_8(VAR_0, VAR_1, VAR_2);






  if (FUNC_3(VAR_9))
   VAR_5 = FUNC_4(VAR_5);

  if (FUNC_7(VAR_9))
   VAR_5 = FUNC_5(VAR_5);
 }

 if (VAR_6) {
  struct vm_area_struct VAR_10 = FUNC_0(VAR_0, 0);
  FUNC_1(&VAR_10, VAR_8, VAR_1);
 }
 return VAR_5;
}
