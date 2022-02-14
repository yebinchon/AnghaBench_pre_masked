
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct mailmap_info* util; } ;
struct string_list {int strdup_strings; int cmp; } ;
struct mailmap_info {struct string_list namemap; void* email; void* name; } ;
struct mailmap_entry {struct string_list namemap; void* email; void* name; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 struct string_list_item* FUNC_3 (struct string_list*,char*) ;
 void* FUNC_4 (int,int) ;
 void* FUNC_5 (char*) ;
 void* FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct string_list *VAR_1,
   char *VAR_2, char *VAR_3,
   char *VAR_4, char *VAR_5)
{
 struct mailmap_entry *VAR_6;
 struct string_list_item *VAR_7;

 if (VAR_5 == ((void*)0)) {
  VAR_5 = VAR_3;
  VAR_3 = ((void*)0);
 }

 VAR_7 = FUNC_3(VAR_1, VAR_5);
 if (VAR_7->util) {
  VAR_6 = (struct mailmap_entry *)VAR_7->util;
 } else {
  VAR_6 = FUNC_4(1, sizeof(struct mailmap_entry));
  VAR_6->namemap.strdup_strings = 1;
  VAR_6->namemap.cmp = VAR_0;
  VAR_7->util = VAR_6;
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_0("mailmap: adding (simple) entry for '%s'\n", VAR_5);


  if (VAR_2) {
   FUNC_2(VAR_6->name);
   VAR_6->name = FUNC_5(VAR_2);
  }
  if (VAR_3) {
   FUNC_2(VAR_6->email);
   VAR_6->email = FUNC_5(VAR_3);
  }
 } else {
  struct mailmap_info *VAR_8 = FUNC_4(1, sizeof(struct mailmap_info));
  FUNC_0("mailmap: adding (complex) entry for '%s'\n", VAR_5);
  VAR_8->name = FUNC_6(VAR_2);
  VAR_8->email = FUNC_6(VAR_3);
  FUNC_3(&VAR_6->namemap, VAR_4)->util = VAR_8;
 }

 FUNC_0("mailmap:  '%s' <%s> -> '%s' <%s>\n",
   FUNC_1(VAR_4), VAR_5,
   FUNC_1(VAR_2), FUNC_1(VAR_3));
}
