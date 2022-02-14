
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {int housekeeping; } ;
typedef TYPE_1__ amb_dev ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (struct timer_list *VAR_4) {
  amb_dev * VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);




  FUNC_0 (VAR_5);
  FUNC_2(&VAR_5->housekeeping, VAR_3 + 10*VAR_0);

  return;
}
