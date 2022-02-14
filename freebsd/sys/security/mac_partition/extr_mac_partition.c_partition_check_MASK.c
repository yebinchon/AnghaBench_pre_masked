
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct label*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct label *VAR_2, struct label *VAR_3)
{

 if (VAR_1 == 0)
  return (0);

 if (VAR_2 == ((void*)0))
  return (0);

 if (FUNC_0(VAR_2) == 0)
  return (0);






 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (FUNC_0(VAR_2) == FUNC_0(VAR_3))
  return (0);

 return (VAR_0);
}
