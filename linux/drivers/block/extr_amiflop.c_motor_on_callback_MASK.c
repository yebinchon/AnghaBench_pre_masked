
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {int pra; } ;
struct TYPE_4__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_7)
{
 if (!(VAR_2.pra & VAR_0) || --VAR_6 == 0) {
  FUNC_1(&VAR_4);
 } else {
  VAR_5.expires = VAR_3 + VAR_1/10;
  FUNC_0(&VAR_5);
 }
}
