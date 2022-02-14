
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct bridge_if {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,char*,size_t) ;
 struct bridge_if* VAR_1 ;
 char* VAR_2 ;
 struct bridge_if* FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3, uint VAR_4)
{
 struct bridge_if *VAR_5;

 if (VAR_4 >= VAR_0)
  return (-1);

 FUNC_0(VAR_3, VAR_2, VAR_4);
 VAR_2[VAR_4] = '\0';

 if ((VAR_5 = FUNC_1(VAR_2)) == ((void*)0)) {
  VAR_1 = ((void*)0);
  return (0);
 }

 VAR_1 = VAR_5;
 return (1);
}
