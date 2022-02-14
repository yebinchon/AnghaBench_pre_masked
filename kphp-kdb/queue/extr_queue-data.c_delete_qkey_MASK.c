
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {char* x; int * y; } ;
typedef TYPE_2__ shmap_pair_string_vptr ;
struct TYPE_13__ {scalar_t__ lock; char* name; TYPE_5__* q; TYPE_1__* prev_st; int timeout; } ;
typedef TYPE_3__ qkey ;
struct TYPE_14__ {int keys_cnt; } ;
struct TYPE_11__ {int ref_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ,char*,scalar_t__,char*,TYPE_5__*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (int *,TYPE_2__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_11 (qkey *VAR_5) {
  FUNC_1 (VAR_5 != ((void*)0));

  FUNC_3 (VAR_5);
  if (VAR_5->lock) {
    FUNC_5 (VAR_0, 0, "trying to del locked key (%d)(key name = %s)(queue pointer = %p)(timeout = %d)!\n", VAR_5->lock, VAR_5->name, VAR_5->q, VAR_5->timeout);
    FUNC_0 (VAR_5, 100);
    return;
  }


  FUNC_1 (VAR_5->lock == 0);

  if (VAR_5->prev_st != ((void*)0)) {
    VAR_5->prev_st->ref_cnt--;
  }
  VAR_5->q->keys_cnt--;
  FUNC_9 (VAR_5->q);

  shmap_pair_string_vptr VAR_6;
  VAR_6.y = ((void*)0);
  VAR_6.x = VAR_5->name;

  if (VAR_4 > 2) {
    FUNC_7 (VAR_2, "Key deleted : [%s]\n", VAR_5->name);
  }
  FUNC_2 ("Key deleted : [%s]\n", VAR_5->name);
  FUNC_10 (&VAR_1, VAR_6);


  VAR_3 -= FUNC_4();
  FUNC_6 (VAR_5->name);
  VAR_3 += FUNC_4();

  FUNC_8 (VAR_5);
}
