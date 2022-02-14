
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mytree {TYPE_1__* cur; scalar_t__ ignore; } ;
typedef char XML_Char ;
struct TYPE_2__ {int cont; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0 , const XML_Char *VAR_1 , int VAR_2)
{
 struct mytree *VAR_3;
 const char *VAR_4, *VAR_5;

 VAR_3 = VAR_0;
 if (VAR_3->ignore)
  return;
 VAR_4 = VAR_1;
 VAR_5 = VAR_1 + VAR_2 - 1;
 while (FUNC_0(*VAR_4) && VAR_4 < VAR_5)
  VAR_4++;
 while (FUNC_0(*VAR_5) && VAR_5 > VAR_4)
  VAR_5--;
 if (VAR_5 != VAR_4 || *VAR_4)
  FUNC_1(VAR_3->cur->cont, VAR_4, VAR_5 - VAR_4 + 1);
}
