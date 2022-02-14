
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sq_mapping {struct sq_mapping* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sq_mapping* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct sq_mapping *VAR_2)
{
 struct sq_mapping **VAR_3, *VAR_4;

 FUNC_0(&VAR_1);

 for (VAR_3 = &VAR_0; (VAR_4 = *VAR_3); VAR_3 = &VAR_4->next)
  if (VAR_4 == VAR_2) {
   *VAR_3 = VAR_4->next;
   break;
  }

 FUNC_1(&VAR_1);
}
