
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* write ) (int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;

int
FUNC_1(int VAR_2)
{
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 VAR_3 = VAR_1->write(VAR_2);
 return (VAR_3);
}
