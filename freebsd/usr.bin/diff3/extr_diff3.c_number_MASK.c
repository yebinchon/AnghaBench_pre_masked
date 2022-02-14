
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1(char **VAR_0)
{
 int VAR_1;

 VAR_1 = 0;
 while (FUNC_0((unsigned char)(**VAR_0)))
  VAR_1 = VAR_1*10 + *(*VAR_0)++ - '0';
 return (VAR_1);
}
