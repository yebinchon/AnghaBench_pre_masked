
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int phandle ;
struct TYPE_2__ {int (* no_setprop ) (int ,char const*,char*,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,char const*,char*,int) ;

int FUNC_4(phandle VAR_2, const char *VAR_3, char *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5 == 0)
  return 0;
 if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))
  return 0;
 FUNC_1(&VAR_0, VAR_6);
 VAR_7 = VAR_1->no_setprop(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0();
 FUNC_2(&VAR_0, VAR_6);
 return VAR_7;
}
