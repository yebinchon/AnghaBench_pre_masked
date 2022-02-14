
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {unsigned char state; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct timer_list*,scalar_t__) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{
 unsigned char VAR_6 = VAR_4->state;


 VAR_6 ^= VAR_2;


 if (FUNC_0(FUNC_2()))
  VAR_6 &= ~VAR_0;
 else
  VAR_6 |= VAR_0;


 FUNC_3(VAR_6);


 FUNC_1(VAR_5, VAR_3 + VAR_1);
}
