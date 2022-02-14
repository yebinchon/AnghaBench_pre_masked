
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expected_gain; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2 (void) {
  FUNC_0 (VAR_1 > 0);
  if (--VAR_1) {
    int VAR_2 = FUNC_1 (1, VAR_0[VAR_1+1].expected_gain);
    VAR_0[VAR_2] = VAR_0[VAR_1+1];
  }
}
