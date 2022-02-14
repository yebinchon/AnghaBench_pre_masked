
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {int string; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(void) {

 if (!VAR_0) return;
 VAR_2++;
 if (VAR_2 >= VAR_1.integer) {
  VAR_2 = 0;

  FUNC_4(&VAR_3);
  if (FUNC_2(VAR_3.string)) {
   FUNC_1(VAR_3.string);
   FUNC_3("bot_interbreedwrite", "");
  }
  FUNC_0();
 }
}
