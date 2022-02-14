
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cursize; struct TYPE_8__* data; } ;
typedef TYPE_1__ msg_t ;
typedef TYPE_1__ byte ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_0 ;

void FUNC_2(msg_t *VAR_1, byte *VAR_2, int VAR_3, msg_t *VAR_4)
{
 if (VAR_3<VAR_4->cursize) {
  FUNC_0( VAR_0, "MSG_Copy: can't copy into a smaller msg_t buffer");
 }
 FUNC_1(VAR_1, VAR_4, sizeof(msg_t));
 VAR_1->data = VAR_2;
 FUNC_1(VAR_1->data, VAR_4->data, VAR_4->cursize);
}
