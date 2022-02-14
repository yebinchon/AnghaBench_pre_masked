
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct passwd *VAR_2 = VAR_0;
 const struct passwd *VAR_3 = VAR_1;

 return (FUNC_0(VAR_2->pw_name, VAR_3->pw_name));
}
