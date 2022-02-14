
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {void* expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int* VAR_2 ;
 void* VAR_3 ;
 TYPE_1__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_6)
{
 unsigned long VAR_7 = VAR_5;

 FUNC_1();


 if (!VAR_7) {
  VAR_4.expires = VAR_3 +
   ((1 + (VAR_2[0] >> VAR_0)) * VAR_1);
 } else {
  VAR_4.expires = VAR_3 + (VAR_7 * VAR_1);
 }
 FUNC_0(&VAR_4);
}
