
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* items; } ;
struct TYPE_7__ {long long resp_size; struct TYPE_7__* site; int * userid; int * vhost; int * uniq_key; int * time; int * status; scalar_t__ serve_time; int * req; int * req_key; int * ref; int * qstr; int * protocol; int * os_type; int * os; int * method; int * keyphrase; int * host; int * errstr; int * date; int * country; int * continent; int * browser_type; int * browser; int * agent; } ;
typedef TYPE_1__ GLogItem ;
typedef TYPE_2__ GLog ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

GLogItem *
FUNC_2 (GLog * VAR_0)
{
  GLogItem *VAR_1;
  VAR_0->items = FUNC_1 (sizeof (GLogItem));
  VAR_1 = VAR_0->items;
  FUNC_0 (VAR_1, 0, sizeof *VAR_1);

  VAR_1->agent = ((void*)0);
  VAR_1->browser = ((void*)0);
  VAR_1->browser_type = ((void*)0);
  VAR_1->continent = ((void*)0);
  VAR_1->country = ((void*)0);
  VAR_1->date = ((void*)0);
  VAR_1->errstr = ((void*)0);
  VAR_1->host = ((void*)0);
  VAR_1->keyphrase = ((void*)0);
  VAR_1->method = ((void*)0);
  VAR_1->os = ((void*)0);
  VAR_1->os_type = ((void*)0);
  VAR_1->protocol = ((void*)0);
  VAR_1->qstr = ((void*)0);
  VAR_1->ref = ((void*)0);
  VAR_1->req_key = ((void*)0);
  VAR_1->req = ((void*)0);
  VAR_1->resp_size = 0LL;
  VAR_1->serve_time = 0;
  VAR_1->status = ((void*)0);
  VAR_1->time = ((void*)0);
  VAR_1->uniq_key = ((void*)0);
  VAR_1->vhost = ((void*)0);
  VAR_1->userid = ((void*)0);

  FUNC_0 (VAR_1->site, 0, sizeof (VAR_1->site));

  return VAR_1;
}
