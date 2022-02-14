
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {int state; } ;
typedef TYPE_1__ tsd_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_7(tsd_t *VAR_3, uint8_t VAR_4) {

 FUNC_0(VAR_4 != VAR_2);
 uint8_t VAR_5 = FUNC_2(&VAR_3->state, VAR_0);
 if (VAR_5 > VAR_1) {




  FUNC_0(!FUNC_4(VAR_3));
  FUNC_3(&VAR_3->state, VAR_4, VAR_0);
  if (VAR_4 <= VAR_1) {
   FUNC_1(VAR_3);
  }
 } else {





  FUNC_0(FUNC_4(VAR_3));
  if (VAR_4 > VAR_1) {
   FUNC_5(VAR_3);
   FUNC_3(&VAR_3->state, VAR_4,
       VAR_0);
  } else {






   FUNC_6(VAR_3);
  }
 }
}
