
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,size_t) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, size_t VAR_1)
{
 ssize_t VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return 0;
 return FUNC_0(VAR_0 + VAR_2);
}
