
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct passwd *VAR_2 = VAR_0;
 const struct passwd *VAR_3 = VAR_1;

 return (VAR_2->pw_uid - VAR_3->pw_uid);
}
