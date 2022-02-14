
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_6__ {int suspended; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct TYPE_5__ {TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int (*) (int )) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 () ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void FUNC_4(suspend_state_t VAR_6)
{
 if (VAR_5.data.mode == VAR_0) {
  VAR_4->suspended = 1;

  FUNC_1(0, FUNC_0);


  VAR_3 = FUNC_2(VAR_3,
          &VAR_1,
          VAR_2);
 } else {
  FUNC_0(0);
 }

 FUNC_3();
}
