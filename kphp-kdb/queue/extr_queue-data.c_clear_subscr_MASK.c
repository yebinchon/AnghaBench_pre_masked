
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* subs; int id; int name; } ;
typedef TYPE_1__ queue ;
struct TYPE_6__ {scalar_t__ size; int root; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4 (queue *VAR_5) {
  FUNC_0 ("clear_subscr: (q = %p), (qname = %s)\n", VAR_5, VAR_5->name);
  if (-VAR_5->subs->size > VAR_0) {
    VAR_3 += -VAR_5->subs->size - VAR_0;
  }
  VAR_2 = FUNC_2 (VAR_5->subs->root, VAR_1, VAR_0);
  FUNC_1 (VAR_5->id, ((void*)0), VAR_1, VAR_2, 0, 0);

  VAR_4 += VAR_5->subs->size;
  FUNC_3 (VAR_5->subs);
  VAR_4 -= VAR_5->subs->size;
}
