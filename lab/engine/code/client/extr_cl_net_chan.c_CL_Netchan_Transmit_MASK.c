
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ compat; } ;
typedef TYPE_1__ netchan_t ;
struct TYPE_10__ {int data; int cursize; } ;
typedef TYPE_2__ msg_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;

void FUNC_5( netchan_t *VAR_1, msg_t* VAR_2 ) {
 FUNC_3( VAR_2, VAR_0 );






 FUNC_4(VAR_1, VAR_2->cursize, VAR_2->data);


 while(FUNC_1(VAR_1))
 {
  FUNC_2("WARNING: #462 unsent fragments (not supposed to happen!)\n");
 }
}
