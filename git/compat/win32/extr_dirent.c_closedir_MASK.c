
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dd_handle; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(DIR *VAR_2)
{
 if (!VAR_2) {
  VAR_1 = VAR_0;
  return -1;
 }

 FUNC_0(VAR_2->dd_handle);
 FUNC_1(VAR_2);
 return 0;
}
