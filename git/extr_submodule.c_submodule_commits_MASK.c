
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {scalar_t__ util; } ;
struct string_list {int dummy; } ;
struct oid_array {int dummy; } ;


 struct string_list_item* FUNC_0 (struct string_list*,char const*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static struct oid_array *FUNC_2(struct string_list *VAR_0,
        const char *VAR_1)
{
 struct string_list_item *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2->util)
  return (struct oid_array *) VAR_2->util;


 VAR_2->util = FUNC_1(1, sizeof(struct oid_array));
 return (struct oid_array *) VAR_2->util;
}
