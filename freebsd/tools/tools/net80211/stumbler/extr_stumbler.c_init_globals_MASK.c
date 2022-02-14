
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chan; scalar_t__ locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3() {
 VAR_3 = FUNC_2(VAR_0, VAR_1, 0);
 if (VAR_3 == -1) {
  FUNC_1("socket()");
  FUNC_0(1);
 }

 VAR_2.locked = 0;
 VAR_2.chan = 0;
}
