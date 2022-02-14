
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_16__ {int nts; } ;
struct TYPE_15__ {int nts; } ;
struct TYPE_14__ {int nts; } ;
struct TYPE_13__ {scalar_t__ nbw; } ;
struct TYPE_18__ {scalar_t__ hits; scalar_t__ visitors; float hits_perc; float bw_perc; float visitors_perc; int data; scalar_t__ protocol; scalar_t__ method; TYPE_4__ maxts; TYPE_3__ cumts; TYPE_2__ avgts; TYPE_1__ bw; int id; } ;
struct TYPE_17__ {int bw; int visitors; int hits; } ;
struct TYPE_12__ {scalar_t__ append_protocol; scalar_t__ append_method; scalar_t__ serve_usecs; } ;
typedef TYPE_5__ GPercTotals ;
typedef TYPE_6__ GMetrics ;


 TYPE_11__ VAR_0 ;
 float FUNC_0 (int ,scalar_t__) ;
 TYPE_6__* FUNC_1 () ;

void
FUNC_2 (GMetrics * VAR_1, GMetrics ** VAR_2, GPercTotals VAR_3)
{
  GMetrics *VAR_4;


  float VAR_5 = FUNC_0 (VAR_3.hits, VAR_1->hits);
  float VAR_6 = FUNC_0 (VAR_3.visitors, VAR_1->visitors);
  float VAR_7 = FUNC_0 (VAR_3.bw, VAR_1->bw.nbw);

  VAR_4 = FUNC_1 ();


  VAR_4->id = VAR_1->id;
  VAR_4->hits = VAR_1->hits;
  VAR_4->visitors = VAR_1->visitors;


  VAR_4->hits_perc = VAR_5 < 0 ? 0 : VAR_5;
  VAR_4->bw_perc = VAR_7 < 0 ? 0 : VAR_7;
  VAR_4->visitors_perc = VAR_6 < 0 ? 0 : VAR_6;


  VAR_4->bw.nbw = VAR_1->bw.nbw;


  if (VAR_0.serve_usecs && VAR_1->hits > 0) {
    VAR_4->avgts.nts = VAR_1->avgts.nts;
    VAR_4->cumts.nts = VAR_1->cumts.nts;
    VAR_4->maxts.nts = VAR_1->maxts.nts;
  }


  if (VAR_0.append_method && VAR_1->method)
    VAR_4->method = VAR_1->method;


  if (VAR_0.append_protocol && VAR_1->protocol)
    VAR_4->protocol = VAR_1->protocol;


  VAR_4->data = VAR_1->data;

  *VAR_2 = VAR_4;
}
