
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user {int space; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct user *VAR_2, *VAR_3;
 VAR_2 = (const struct user *)VAR_0;
 VAR_3 = (const struct user *)VAR_1;

 return VAR_3->space - VAR_2->space;
}
