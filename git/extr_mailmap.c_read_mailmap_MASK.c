
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int strdup_strings; int cmp; } ;
struct TYPE_2__ {scalar_t__ have_repository; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct string_list*,char*,char**) ;
 int FUNC_2 (struct string_list*,char*,char**) ;
 TYPE_1__* VAR_3 ;

int FUNC_3(struct string_list *VAR_4, char **VAR_5)
{
 int VAR_6 = 0;

 VAR_4->strdup_strings = 1;
 VAR_4->cmp = VAR_2;

 if (!VAR_0 && FUNC_0())
  VAR_0 = "HEAD:.mailmap";

 VAR_6 |= FUNC_2(VAR_4, ".mailmap", VAR_5);
 if (VAR_3->have_repository)
  VAR_6 |= FUNC_1(VAR_4, VAR_0, VAR_5);
 VAR_6 |= FUNC_2(VAR_4, VAR_1, VAR_5);
 return VAR_6;
}
