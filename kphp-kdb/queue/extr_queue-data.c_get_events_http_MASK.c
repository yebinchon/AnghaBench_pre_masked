
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* q; TYPE_2__* st; int subscribed; scalar_t__ ts; scalar_t__ prev_ts; int timeout; } ;
typedef TYPE_1__ qkey ;
struct TYPE_7__ {scalar_t__ data_len; int* data; int created; struct TYPE_7__* next; } ;
typedef TYPE_2__ event ;
struct TYPE_8__ {int name; int extra; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 double FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * VAR_9 ;
 double FUNC_6 (int ,int ) ;
 double VAR_10 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_11 ;
 double VAR_12 ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int*,scalar_t__) ;

char *FUNC_11 (qkey *VAR_13) {
  if (!VAR_11) {
    VAR_7 = VAR_5;
  }

  FUNC_7 (VAR_13);

  if (FUNC_3 (VAR_13->q->name) == VAR_1) {
    FUNC_9 (FUNC_5 (VAR_13->q->name), VAR_13->timeout, VAR_13->q->extra);
  }

  VAR_13->ts = VAR_13->prev_ts + 1;
  FUNC_2 ("{\"ts\":\"%d\"", VAR_13->ts);

  int VAR_14 = 0;
  FUNC_2 (",\"events\":[");

  event *VAR_15 = VAR_13->st;

  double VAR_16 = FUNC_4 (VAR_0);
  while (VAR_15->next != ((void*)0)) {
    VAR_15 = VAR_15->next;

    if (VAR_14) {
      FUNC_2 (",");
    } else {
      VAR_2 = 0;
      VAR_14 = 1;
    }

    if (VAR_7 + VAR_15->data_len > VAR_5 + (1 << 23)) {
      FUNC_1 ("Queue %s overflow\n", VAR_13->q->name);
      VAR_6 = 1;
      break;
    }
    FUNC_0 (VAR_7 + VAR_15->data_len < VAR_5 + (1 << 24));
    FUNC_0 (VAR_15->data_len > 0);
    if (VAR_15->data[0] == 2) {
      FUNC_2 ("%s", VAR_15->data + 1);
    } else {
      FUNC_2 ("\"");
      VAR_7 += FUNC_10 (VAR_7, VAR_15->data, VAR_15->data_len - 1);
      FUNC_2 ("\"");
    }

    double VAR_17 = VAR_16 - FUNC_6 (VAR_15->created, VAR_13->subscribed);
    VAR_12 += VAR_17;
    VAR_4++;
    VAR_8++;

    if (VAR_17 > VAR_10) {
      VAR_10 = VAR_17;

    }
  }
  VAR_13->st = VAR_15;

  FUNC_2 ("]}");

  if (VAR_6) {
    VAR_9[3]++;
    VAR_3++;
    VAR_6 = 0;
    VAR_7 = VAR_5;
    FUNC_2 ("{\"failed\":3}");
  }

  FUNC_8 (VAR_13->q);

  return VAR_5;
}
