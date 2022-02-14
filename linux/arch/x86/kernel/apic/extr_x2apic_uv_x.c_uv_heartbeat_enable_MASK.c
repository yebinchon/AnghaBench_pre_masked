
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {scalar_t__ expires; } ;
struct TYPE_2__ {int enabled; struct timer_list timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timer_list*,unsigned int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct timer_list*,int ,int ) ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int VAR_5 ;
 int FUNC_3 (unsigned int,int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_6)
{
 while (!FUNC_2(VAR_6)->enabled) {
  struct timer_list *VAR_7 = &FUNC_2(VAR_6)->timer;

  FUNC_3(VAR_6, VAR_2|VAR_0);
  FUNC_1(VAR_7, VAR_5, VAR_3);
  VAR_7->expires = VAR_4 + VAR_1;
  FUNC_0(VAR_7, VAR_6);
  FUNC_2(VAR_6)->enabled = 1;


  VAR_6 = 0;
 }
 return 0;
}
