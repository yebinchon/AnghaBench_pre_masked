
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe_ref {int flags; int pfn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct tlbe_ref *VAR_1)
{
 if (VAR_1->flags & VAR_0) {

  FUNC_0(VAR_1->pfn, VAR_1->flags);
  VAR_1->flags = 0;
 }
}
