
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_22__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_39__ {int nts; } ;
struct TYPE_37__ {int nts; } ;
struct TYPE_35__ {int nts; } ;
struct TYPE_33__ {int nbw; } ;
struct TYPE_40__ {TYPE_8__ maxts; TYPE_6__ cumts; TYPE_4__ avgts; int visitors; int id; int hits; int data; TYPE_2__ bw; } ;
struct TYPE_38__ {int nts; } ;
struct TYPE_36__ {int nts; } ;
struct TYPE_34__ {int nts; } ;
struct TYPE_32__ {scalar_t__ serve_usecs; } ;
struct TYPE_31__ {int nbw; } ;
struct TYPE_30__ {TYPE_7__ maxts; TYPE_5__ cumts; TYPE_3__ avgts; int visitors; int id; int hits; int data; TYPE_1__ bw; } ;
struct TYPE_29__ {int idx; TYPE_10__* items; int module; } ;
struct TYPE_28__ {TYPE_18__* metrics; } ;
struct TYPE_27__ {TYPE_9__* metrics; struct TYPE_27__* next; } ;
struct TYPE_26__ {TYPE_12__* head; int size; } ;
struct TYPE_25__ {TYPE_11__* sub_list; } ;
typedef TYPE_11__ GSubList ;
typedef TYPE_12__ GSubItem ;
typedef int GSort ;
typedef TYPE_13__ GHolderItem ;
typedef TYPE_14__ GHolder ;


 int FUNC_0 (TYPE_11__*,int ,TYPE_18__*) ;
 TYPE_22__ VAR_0 ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_13__*) ;
 TYPE_13__* FUNC_3 (int ) ;
 TYPE_18__* FUNC_4 () ;
 TYPE_11__* FUNC_5 () ;
 int FUNC_6 (TYPE_13__*,int,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (GHolder * VAR_1, GSort VAR_2)
{
  GHolderItem *VAR_3;
  GSubItem *VAR_4;
  GSubList *VAR_5;
  int VAR_6, VAR_7, VAR_8;


  for (VAR_6 = 0; VAR_6 < VAR_1->idx; VAR_6++) {
    VAR_5 = VAR_1->items[VAR_6].sub_list;
    if (VAR_5 == ((void*)0))
      continue;

    VAR_3 = FUNC_3 (VAR_5->size);


    for (VAR_7 = 0, VAR_4 = VAR_5->head; VAR_4; VAR_4 = VAR_4->next, VAR_7++) {
      VAR_3[VAR_7].metrics = FUNC_4 ();

      VAR_3[VAR_7].metrics->bw.nbw = VAR_4->metrics->bw.nbw;
      VAR_3[VAR_7].metrics->data = FUNC_7 (VAR_4->metrics->data);
      VAR_3[VAR_7].metrics->hits = VAR_4->metrics->hits;
      VAR_3[VAR_7].metrics->id = VAR_4->metrics->id;
      VAR_3[VAR_7].metrics->visitors = VAR_4->metrics->visitors;
      if (VAR_0.serve_usecs) {
        VAR_3[VAR_7].metrics->avgts.nts = VAR_4->metrics->avgts.nts;
        VAR_3[VAR_7].metrics->cumts.nts = VAR_4->metrics->cumts.nts;
        VAR_3[VAR_7].metrics->maxts.nts = VAR_4->metrics->maxts.nts;
      }
    }
    FUNC_6 (VAR_3, VAR_7, VAR_2);
    FUNC_1 (VAR_5);

    VAR_5 = FUNC_5 ();
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
      if (VAR_8 > 0)
        VAR_5 = VAR_1->items[VAR_6].sub_list;

      FUNC_0 (VAR_5, VAR_1->module, VAR_3[VAR_8].metrics);
      VAR_1->items[VAR_6].sub_list = VAR_5;
    }
    FUNC_2 (VAR_3);
  }
}
