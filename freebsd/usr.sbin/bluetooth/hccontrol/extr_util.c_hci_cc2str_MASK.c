
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;

char const *
FUNC_1(int VAR_0)
{
 static char const * const VAR_1[] = {
             "North America, Europe, Japan",
             "France"
 };

 return (VAR_0 >= FUNC_0(VAR_1)? "?" : VAR_1[VAR_0]);
}
