
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (unsigned long,int) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct page* FUNC_6 (int ) ;
 int FUNC_7 (unsigned long,int,void*) ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_1, int VAR_2, int VAR_3,
   int (*VAR_4)(unsigned long VAR_5, int VAR_6, void *VAR_7), void *VAR_8)
{
 struct page *VAR_9;
 pte_t *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_1, VAR_3);
 if (VAR_10 == ((void*)0))
  return -1;

 VAR_9 = FUNC_6(*VAR_10);





 VAR_1 = (unsigned long) FUNC_0(VAR_9) +
  (VAR_1 & ~VAR_0);

 VAR_11 = (*VAR_4)(VAR_1, VAR_2, VAR_8);




 FUNC_1((void *)VAR_1);


 return VAR_11;
}
