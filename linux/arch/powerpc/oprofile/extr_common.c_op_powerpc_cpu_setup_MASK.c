
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cpu_setup ) (int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_1->cpu_setup(VAR_0);

 if (VAR_4 != 0)
  VAR_2 = VAR_4;
}
