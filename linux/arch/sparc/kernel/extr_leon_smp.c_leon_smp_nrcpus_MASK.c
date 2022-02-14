
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mpstatus; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_1(void)
{
 int VAR_2 =
     ((FUNC_0(&(VAR_1->mpstatus)) >>
       VAR_0) & 0xf) + 1;
 return VAR_2;
}
