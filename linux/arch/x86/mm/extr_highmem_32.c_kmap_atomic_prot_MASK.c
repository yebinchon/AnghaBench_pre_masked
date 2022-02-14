
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_2 ;
 int FUNC_5 (struct page*,int ) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 () ;

void *FUNC_12(struct page *VAR_3, pgprot_t VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 FUNC_8();
 FUNC_7();

 if (!FUNC_1(VAR_3))
  return FUNC_6(VAR_3);

 VAR_7 = FUNC_4();
 VAR_6 = VAR_7 + VAR_1*FUNC_11();
 VAR_5 = FUNC_2(VAR_0 + VAR_6);
 FUNC_0(!FUNC_9(*(VAR_2-VAR_6)));
 FUNC_10(VAR_2-VAR_6, FUNC_5(VAR_3, VAR_4));
 FUNC_3();

 return (void *)VAR_5;
}
