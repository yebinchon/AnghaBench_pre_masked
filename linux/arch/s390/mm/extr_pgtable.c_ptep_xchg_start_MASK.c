
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pgste_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mm_struct*,unsigned long,int *,int ) ;

__attribute__((used)) static inline pgste_t FUNC_4(struct mm_struct *VAR_0,
          unsigned long VAR_1, pte_t *VAR_2)
{
 pgste_t VAR_3 = FUNC_0(0);

 if (FUNC_1(VAR_0)) {
  VAR_3 = FUNC_2(VAR_2);
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 }
 return VAR_3;
}
