
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int strdup_strings; int nr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct string_list*,int ) ;

void FUNC_2(struct string_list *VAR_1)
{
 FUNC_0("mailmap: clearing %d entries...\n", VAR_1->nr);
 VAR_1->strdup_strings = 1;
 FUNC_1(VAR_1, VAR_0);
 FUNC_0("mailmap: cleared\n");
}
