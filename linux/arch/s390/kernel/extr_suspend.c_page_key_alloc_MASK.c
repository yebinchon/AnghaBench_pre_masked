
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_key_data {void* next; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_3 ;
 int FUNC_2 () ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_3(unsigned long VAR_8)
{
 struct page_key_data *VAR_9;
 unsigned long VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_2);
 while (VAR_10--) {
  VAR_9 = (struct page_key_data *) FUNC_1(VAR_1);
  if (!VAR_9) {
   FUNC_2();
   return -VAR_0;
  }
  VAR_9->next = VAR_3;
  VAR_3 = VAR_9;
 }
 VAR_4 = VAR_6 = VAR_3;
 VAR_5 = VAR_7 = 0;
 return 0;
}
