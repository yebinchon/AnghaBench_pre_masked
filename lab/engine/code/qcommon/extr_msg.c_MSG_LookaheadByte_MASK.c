
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readcount; int bit; } ;
typedef TYPE_1__ msg_t ;


 int FUNC_0 () ;
 int FUNC_1 (int const) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3( msg_t *VAR_0 ) {
 const int VAR_1 = FUNC_0();
 const int VAR_2 = VAR_0->readcount;
 const int VAR_3 = VAR_0->bit;
 int VAR_4 = FUNC_2(VAR_0);
 FUNC_1(VAR_1);
 VAR_0->readcount = VAR_2;
 VAR_0->bit = VAR_3;
 return VAR_4;
}
