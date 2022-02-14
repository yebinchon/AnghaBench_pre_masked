
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int phandle ;
struct TYPE_2__ {int (* no_proplen ) (int ,char const*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,char const*) ;

int FUNC_4(phandle VAR_2, const char *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 if((!VAR_2) || (!VAR_3))
  return -1;

 FUNC_1(&VAR_0, VAR_5);
 VAR_4 = VAR_1->no_proplen(VAR_2, VAR_3);
 FUNC_0();
 FUNC_2(&VAR_0, VAR_5);
 return VAR_4;
}
