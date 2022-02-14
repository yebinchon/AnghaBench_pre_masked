
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_20__ {size_t idx; TYPE_5__* items; int module; } ;
struct TYPE_19__ {int key; } ;
struct TYPE_18__ {TYPE_10__* metrics; } ;
struct TYPE_17__ {int nts; } ;
struct TYPE_16__ {int nts; } ;
struct TYPE_15__ {int nts; } ;
struct TYPE_14__ {int nbw; } ;
struct TYPE_13__ {scalar_t__ append_protocol; scalar_t__ append_method; } ;
struct TYPE_12__ {int hits; char* data; int visitors; char* method; char* protocol; TYPE_4__ maxts; TYPE_3__ cumts; TYPE_2__ avgts; TYPE_1__ bw; } ;
typedef TYPE_6__ GRawDataItem ;
typedef TYPE_7__ GHolder ;


 TYPE_11__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_10__* FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (GRawDataItem VAR_1, GHolder * VAR_2, char *VAR_3, int VAR_4)
{
  char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
  int VAR_7 = 0;
  uint64_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

  VAR_8 = FUNC_0 (VAR_2->module, VAR_1.key);
  VAR_9 = FUNC_1 (VAR_2->module, VAR_1.key);
  VAR_10 = FUNC_2 (VAR_2->module, VAR_1.key);
  VAR_7 = FUNC_5 (VAR_2->module, VAR_1.key);

  VAR_2->items[VAR_2->idx].metrics = FUNC_6 ();
  VAR_2->items[VAR_2->idx].metrics->hits = VAR_4;
  VAR_2->items[VAR_2->idx].metrics->data = VAR_3;
  VAR_2->items[VAR_2->idx].metrics->visitors = VAR_7;
  VAR_2->items[VAR_2->idx].metrics->bw.nbw = VAR_8;
  VAR_2->items[VAR_2->idx].metrics->avgts.nts = VAR_9 / VAR_4;
  VAR_2->items[VAR_2->idx].metrics->cumts.nts = VAR_9;
  VAR_2->items[VAR_2->idx].metrics->maxts.nts = VAR_10;

  if (VAR_0.append_method) {
    VAR_5 = FUNC_3 (VAR_2->module, VAR_1.key);
    VAR_2->items[VAR_2->idx].metrics->method = VAR_5;
  }

  if (VAR_0.append_protocol) {
    VAR_6 = FUNC_4 (VAR_2->module, VAR_1.key);
    VAR_2->items[VAR_2->idx].metrics->protocol = VAR_6;
  }
}
