
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {char* name; } ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 long VAR_0 ;
 int FUNC_0 (int *,long*) ;
 int FUNC_1 (int *,char*,long) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_1, caddr_t VAR_2)
{
 struct info *VAR_3 = (struct info *)VAR_2;
 long VAR_4;

 if (!FUNC_0(VAR_1, &VAR_4))
  return (0);
 if (VAR_4 > VAR_0)
  return (0);
 if (!FUNC_1(VAR_1, VAR_3->name, VAR_4))
  return (0);
 VAR_3->name[VAR_4] = '\0';
 return (1);
}
