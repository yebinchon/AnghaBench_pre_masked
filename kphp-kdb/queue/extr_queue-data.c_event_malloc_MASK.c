
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data_len; int created; int * next; scalar_t__ ref_cnt; } ;
typedef TYPE_1__ event ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int ) ;

event *FUNC_5 (int VAR_4) {
  size_t VAR_5 = FUNC_3 (VAR_4);

  VAR_2++;
  VAR_1++;


  VAR_3 -= FUNC_1();
  event *VAR_6 = FUNC_2 (VAR_5);
  VAR_3 += FUNC_1();

  FUNC_0 (VAR_6);

  VAR_6->data_len = VAR_4;
  VAR_6->ref_cnt = 0;
  VAR_6->next = ((void*)0);

  VAR_6->created = FUNC_4 (VAR_0);

  return VAR_6;
}
