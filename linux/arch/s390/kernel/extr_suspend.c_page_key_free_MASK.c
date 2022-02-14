
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_key_data {struct page_key_data* next; } ;


 int FUNC_0 (unsigned long) ;
 struct page_key_data* VAR_0 ;

void FUNC_1(void)
{
 struct page_key_data *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_1->next;
  FUNC_0((unsigned long) VAR_1);
 }
}
