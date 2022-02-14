
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; int flags; } ;
struct address_space {int dummy; } ;
typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct address_space*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 struct address_space* FUNC_7 (struct page*) ;

void FUNC_8(struct page *VAR_2)
{
 struct address_space *VAR_3;

 if (!FUNC_2()) {
  FUNC_3(VAR_1, &VAR_2->flags);
  return;
 }


 VAR_3 = FUNC_7(VAR_2);
 if (!VAR_3)
  return;





 if (!FUNC_4(VAR_3)) {
  FUNC_3(VAR_1, &VAR_2->flags);
 } else if (FUNC_6(VAR_2)) {


  phys_addr_t VAR_4 = (unsigned long)FUNC_5(VAR_2);
  unsigned long VAR_5 = VAR_2->index << VAR_0;

  if (FUNC_1(VAR_4, VAR_5))
   FUNC_0(VAR_4, VAR_5);
 }
}
