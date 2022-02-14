
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {scalar_t__ esd_timeout; int esd_work; int last_valid_interrupt; scalar_t__ reset_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct tsc200x*) ;

__attribute__((used)) static void FUNC_4(struct tsc200x *VAR_1)
{
 FUNC_3(VAR_1);

 if (VAR_1->esd_timeout && VAR_1->reset_gpio) {
  VAR_1->last_valid_interrupt = VAR_0;
  FUNC_2(&VAR_1->esd_work,
    FUNC_1(
     FUNC_0(VAR_1->esd_timeout)));
 }
}
