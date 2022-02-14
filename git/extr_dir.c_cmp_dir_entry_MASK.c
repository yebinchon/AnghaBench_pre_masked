
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_entry {int len; int name; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct dir_entry *VAR_2 = *(const struct dir_entry **)VAR_0;
 const struct dir_entry *VAR_3 = *(const struct dir_entry **)VAR_1;

 return FUNC_0(VAR_2->name, VAR_2->len, VAR_3->name, VAR_3->len);
}
