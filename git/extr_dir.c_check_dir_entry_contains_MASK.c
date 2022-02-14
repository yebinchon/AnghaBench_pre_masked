
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_entry {int len; char* name; } ;


 int FUNC_0 (char*,char*,int) ;

int FUNC_1(const struct dir_entry *VAR_0, const struct dir_entry *VAR_1)
{
 return (VAR_0->len < VAR_1->len) &&
  (VAR_0->name[VAR_0->len - 1] == '/') &&
  !FUNC_0(VAR_0->name, VAR_1->name, VAR_0->len);
}
