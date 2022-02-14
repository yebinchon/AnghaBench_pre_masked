
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uahash; int flags; int ip; int id; } ;
typedef TYPE_1__ antispam_pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (TYPE_1__,int ,int ) ;
 double FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,double,...) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_5 (void) {
  int VAR_8;
  FUNC_3 (VAR_6, "[%6.2f] Add all patterns... [free bytes = %d] ", FUNC_1(), FUNC_2());
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    antispam_pattern_t VAR_9;
    VAR_9.id = VAR_3[VAR_8];
    VAR_9.ip = VAR_4[VAR_8];
    VAR_9.flags = VAR_2[VAR_8];
    VAR_9.uahash = VAR_5[VAR_8];
    FUNC_0 (VAR_9, VAR_7[VAR_8], VAR_0);
  }
  FUNC_3 (VAR_6, "OK [free bytes = %f]\n", FUNC_2());
  FUNC_4();
}
