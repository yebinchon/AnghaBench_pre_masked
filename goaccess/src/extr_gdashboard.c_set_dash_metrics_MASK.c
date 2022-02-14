
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_21__ ;
typedef struct TYPE_27__ TYPE_20__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_36__ {int nts; } ;
struct TYPE_35__ {void* sts; } ;
struct TYPE_34__ {int nts; } ;
struct TYPE_33__ {void* sts; } ;
struct TYPE_32__ {int nts; } ;
struct TYPE_31__ {void* sts; } ;
struct TYPE_30__ {int nbw; } ;
struct TYPE_29__ {int sbw; } ;
struct TYPE_28__ {int serve_usecs; scalar_t__ append_protocol; scalar_t__ append_method; } ;
struct TYPE_27__ {TYPE_8__ maxts; TYPE_6__ cumts; TYPE_4__ avgts; scalar_t__ protocol; scalar_t__ method; int data; TYPE_2__ bw; void* visitors_perc; int visitors; void* hits_perc; int hits; } ;
struct TYPE_23__ {int max_visitors; int max_hits; } ;
struct TYPE_26__ {int idx_data; TYPE_11__ meta; TYPE_12__* data; } ;
struct TYPE_25__ {TYPE_1__* module; } ;
struct TYPE_24__ {int is_subitem; TYPE_20__* metrics; } ;
struct TYPE_22__ {char* data; TYPE_9__ maxts; TYPE_7__ cumts; TYPE_5__ avgts; scalar_t__ protocol; scalar_t__ method; TYPE_3__ bw; int visitors; int hits; } ;
typedef size_t GModule ;
typedef TYPE_10__ GMetrics ;
typedef TYPE_11__ GDashMeta ;
typedef TYPE_12__ GDashData ;
typedef TYPE_13__ GDash ;


 TYPE_21__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int ,int ) ;
 TYPE_20__* FUNC_3 () ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_11__*,TYPE_10__*) ;
 int FUNC_6 (TYPE_11__*,TYPE_12__*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (GDash ** VAR_1, GMetrics * VAR_2, GModule VAR_3,
                  int VAR_4)
{
  GDashData *VAR_5 = ((void*)0);
  GDashMeta *VAR_6 = ((void*)0);
  char *VAR_7 = ((void*)0);
  int *VAR_8;

  if (!VAR_2->data)
    return;

  VAR_8 = &(*VAR_1)->module[VAR_3].idx_data;
  VAR_5 = &(*VAR_1)->module[VAR_3].data[(*VAR_8)];
  VAR_6 = &(*VAR_1)->module[VAR_3].meta;

  VAR_5->metrics = FUNC_3 ();
  VAR_5->is_subitem = VAR_4;

  VAR_7 = VAR_4 ? FUNC_4 (VAR_2->data) : VAR_2->data;


  FUNC_5 (VAR_6, VAR_2);

  VAR_5->metrics->hits = VAR_2->hits;
  VAR_5->metrics->hits_perc = FUNC_2 (VAR_6->max_hits, VAR_2->hits);
  VAR_5->metrics->visitors = VAR_2->visitors;
  VAR_5->metrics->visitors_perc =
    FUNC_2 (VAR_6->max_visitors, VAR_2->visitors);
  VAR_5->metrics->bw.sbw = FUNC_0 (VAR_2->bw.nbw);
  VAR_5->metrics->data = FUNC_8 (VAR_7);

  if (VAR_0.append_method && VAR_2->method)
    VAR_5->metrics->method = VAR_2->method;
  if (VAR_0.append_protocol && VAR_2->protocol)
    VAR_5->metrics->protocol = VAR_2->protocol;

  if (!VAR_0.serve_usecs)
    goto out;

  VAR_5->metrics->avgts.sts = FUNC_7 (VAR_2->avgts.nts);
  VAR_5->metrics->cumts.sts = FUNC_7 (VAR_2->cumts.nts);
  VAR_5->metrics->maxts.sts = FUNC_7 (VAR_2->maxts.nts);

out:
  if (VAR_4)
    FUNC_1 (VAR_7);

  FUNC_6 (VAR_6, VAR_5);

  (*VAR_8)++;
}
