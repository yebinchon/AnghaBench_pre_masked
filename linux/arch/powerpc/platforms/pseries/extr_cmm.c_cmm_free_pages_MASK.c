
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmm_page_array {size_t index; unsigned long* page; struct cmm_page_array* next; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,long) ;
 int VAR_0 ;
 struct cmm_page_array* VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static long FUNC_7(long VAR_3)
{
 struct cmm_page_array *VAR_4;
 unsigned long VAR_5;

 FUNC_1("Begin free of %ld pages.\n", VAR_3);
 FUNC_4(&VAR_0);
 VAR_4 = VAR_1;
 while (VAR_3) {
  if (!VAR_4 || VAR_4->index <= 0)
   break;
  VAR_5 = VAR_4->page[--VAR_4->index];

  if (VAR_4->index == 0) {
   VAR_4 = VAR_4->next;
   FUNC_2((unsigned long) VAR_1);
   VAR_1 = VAR_4;
  }

  FUNC_3(FUNC_0(VAR_5));
  FUNC_2(VAR_5);
  VAR_2--;
  VAR_3--;
  FUNC_6();
 }
 FUNC_5(&VAR_0);
 FUNC_1("End request with %ld pages unfulfilled\n", VAR_3);
 return VAR_3;
}
