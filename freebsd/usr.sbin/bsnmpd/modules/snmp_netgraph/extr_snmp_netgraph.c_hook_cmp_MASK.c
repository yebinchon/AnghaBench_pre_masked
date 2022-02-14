
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linkinfo {int ourhook; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct linkinfo *VAR_2 = VAR_0;
 const struct linkinfo *VAR_3 = VAR_1;

 if (FUNC_1(VAR_2->ourhook) < FUNC_1(VAR_3->ourhook))
  return (-1);
 if (FUNC_1(VAR_2->ourhook) > FUNC_1(VAR_3->ourhook))
  return (+1);
 return (FUNC_0(VAR_2->ourhook, VAR_3->ourhook));
}
