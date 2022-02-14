
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* get_random_seed ) (unsigned long*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  if (FUNC_1(&VAR_4)) {
   VAR_3.get_random_seed = FUNC_1;
   return 0;
  }
 }

 FUNC_2("Unable to use DARN for get_random_seed()\n");

 return -VAR_1;
}
