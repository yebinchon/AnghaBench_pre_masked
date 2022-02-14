
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * xbe_name; } ;
typedef TYPE_1__ ximgact_binmisc_entry_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(int VAR_1, char *VAR_2[], ximgact_binmisc_entry_t *VAR_3)
{
 if (VAR_1 == 0)
  FUNC_2("Required argument missing\n");
 if (FUNC_1(VAR_2[0]) > VAR_0)
  FUNC_2("'%s' string length longer than IBE_NAME_MAX (%d)",
      VAR_0);
 FUNC_0(&VAR_3->xbe_name[0], VAR_2[0], VAR_0);

 return (0);
}
