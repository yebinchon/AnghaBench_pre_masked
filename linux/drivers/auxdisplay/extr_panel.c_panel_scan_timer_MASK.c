
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_3__ {int charlcd; scalar_t__ initialized; scalar_t__ enabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_11)
{
 if (VAR_3.enabled && VAR_4) {
  if (FUNC_4(&VAR_9)) {
   FUNC_3();


   FUNC_5(&VAR_9);
  }

  if (!VAR_1 || VAR_7 != VAR_8)
   FUNC_2();
 }

 if (VAR_5 && VAR_6.enabled && VAR_6.initialized)
  FUNC_0(VAR_6.charlcd);

 FUNC_1(&VAR_10, VAR_2 + VAR_0);
}
