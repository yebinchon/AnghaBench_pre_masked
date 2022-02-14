
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int phandle ;
struct TYPE_2__ {int (* no_getprop ) (int ,char const*,char*) ;} ;


 int FUNC_0 (int ,char const*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,char const*,char*) ;

int FUNC_5(phandle VAR_2, const char *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if((VAR_6 > VAR_5) || (VAR_6 == 0) || (VAR_6 == -1))
  return -1;

 FUNC_2(&VAR_0, VAR_8);
 VAR_7 = VAR_1->no_getprop(VAR_2, VAR_3, VAR_4);
 FUNC_1();
 FUNC_3(&VAR_0, VAR_8);
 return VAR_7;
}
