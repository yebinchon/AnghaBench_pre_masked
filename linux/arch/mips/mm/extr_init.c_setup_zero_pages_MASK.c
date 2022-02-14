
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,unsigned int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct page*,unsigned int) ;
 struct page* FUNC_4 (void*) ;
 unsigned int VAR_6 ;

void FUNC_5(void)
{
 unsigned int VAR_7, VAR_8;
 struct page *VAR_9;

 if (VAR_4)
  VAR_7 = 3;
 else
  VAR_7 = 0;

 VAR_5 = FUNC_0(VAR_0 | VAR_3, VAR_7);
 if (!VAR_5)
  FUNC_2("Oh boy, that early out of memory?");

 VAR_9 = FUNC_4((void *)VAR_5);
 FUNC_3(VAR_9, VAR_7);
 for (VAR_8 = 0; VAR_8 < (1 << VAR_7); VAR_8++, VAR_9++)
  FUNC_1(VAR_9);

 VAR_6 = ((VAR_2 << VAR_7) - 1) & VAR_1;
}
