
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_cpl ) (scalar_t__) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2 = 3;

 if (FUNC_0(VAR_0))
  VAR_2 = VAR_1->get_cpl(FUNC_0(VAR_0));

 return VAR_2 != 0;
}
