
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {scalar_t__ state; int mtx; } ;
typedef TYPE_1__ background_thread_info_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(tsd_t *VAR_4, unsigned VAR_5) {
 if (VAR_3) {
  if (FUNC_1()) {
   background_thread_info_t *VAR_6 =
       FUNC_2(VAR_5);
   FUNC_0(VAR_6->state == VAR_1);
   FUNC_3(FUNC_5(VAR_4), &VAR_6->mtx);
   VAR_6->state = VAR_2;
   FUNC_4(FUNC_5(VAR_4), &VAR_6->mtx);
  }
  FUNC_4(FUNC_5(VAR_4), &VAR_0);
 }
}
