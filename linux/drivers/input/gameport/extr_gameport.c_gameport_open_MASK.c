
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport_driver {int dummy; } ;
struct gameport {scalar_t__ (* open ) (struct gameport*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gameport*,struct gameport_driver*) ;
 scalar_t__ FUNC_1 (struct gameport*,int) ;

int FUNC_2(struct gameport *VAR_1, struct gameport_driver *VAR_2, int VAR_3)
{
 if (VAR_1->open) {
  if (VAR_1->open(VAR_1, VAR_3)) {
   return -1;
  }
 } else {
  if (VAR_3 != VAR_0)
   return -1;
 }

 FUNC_0(VAR_1, VAR_2);
 return 0;
}
