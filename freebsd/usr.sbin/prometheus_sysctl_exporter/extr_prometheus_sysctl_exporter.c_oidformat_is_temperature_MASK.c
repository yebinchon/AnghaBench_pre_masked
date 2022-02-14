
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidformat {char* format; } ;



__attribute__((used)) static bool
FUNC_0(const struct oidformat *VAR_0)
{

 return (VAR_0->format[0] == 'I' && VAR_0->format[1] == 'K');
}
