
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_entry {scalar_t__ name; } ;


 struct dir_entry* FUNC_0 (struct index_state*,char*,int) ;
 int FUNC_1 (struct index_state*) ;
 int FUNC_2 (void*,scalar_t__,int) ;

void FUNC_3(struct index_state *VAR_0, char *VAR_1)
{
 const char *VAR_2 = VAR_1;
 const char *VAR_3 = VAR_2;

 FUNC_1(VAR_0);
 while (*VAR_3) {
  while (*VAR_3 && *VAR_3 != '/')
   VAR_3++;

  if (*VAR_3 == '/') {
   struct dir_entry *VAR_4;

   VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3 - VAR_1);
   if (VAR_4) {
    FUNC_2((void *)VAR_2, VAR_4->name + (VAR_2 - VAR_1), VAR_3 - VAR_2);
    VAR_2 = VAR_3 + 1;
   }
   VAR_3++;
  }
 }
}
