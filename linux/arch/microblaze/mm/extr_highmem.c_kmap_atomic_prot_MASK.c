
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
 int VAR_2 ;
 int FUNC_3 () ;
 int * VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct page*,int ) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long,int *,int ) ;
 int FUNC_11 () ;

void *FUNC_12(struct page *VAR_4, pgprot_t VAR_5)
{

 unsigned long VAR_6;
 int VAR_7, VAR_8;

 FUNC_8();
 FUNC_7();
 if (!FUNC_1(VAR_4))
  return FUNC_6(VAR_4);


 VAR_8 = FUNC_3();
 VAR_7 = VAR_8 + VAR_1*FUNC_11();
 VAR_6 = FUNC_2(VAR_0 + VAR_7);



 FUNC_10(&VAR_2, VAR_6, VAR_3-VAR_7, FUNC_5(VAR_4, VAR_5));
 FUNC_4(((void*)0), VAR_6);

 return (void *) VAR_6;
}
