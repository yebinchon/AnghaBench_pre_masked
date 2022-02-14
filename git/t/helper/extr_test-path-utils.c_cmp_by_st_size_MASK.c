
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int util; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 intptr_t VAR_2 = (intptr_t)((struct string_list_item *)VAR_0)->util;
 intptr_t VAR_3 = (intptr_t)((struct string_list_item *)VAR_1)->util;

 return VAR_2 > VAR_3 ? -1 : (VAR_2 < VAR_3 ? +1 : 0);
}
