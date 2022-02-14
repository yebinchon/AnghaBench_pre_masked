
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* vhost; struct TYPE_4__* userid; struct TYPE_4__* uniq_key; struct TYPE_4__* time; struct TYPE_4__* status; struct TYPE_4__* req; struct TYPE_4__* req_key; struct TYPE_4__* ref; struct TYPE_4__* qstr; struct TYPE_4__* protocol; struct TYPE_4__* os_type; struct TYPE_4__* os; struct TYPE_4__* method; struct TYPE_4__* keyphrase; struct TYPE_4__* host; struct TYPE_4__* errstr; struct TYPE_4__* date; struct TYPE_4__* country; struct TYPE_4__* continent; struct TYPE_4__* browser_type; struct TYPE_4__* browser; struct TYPE_4__* agent; } ;
typedef TYPE_1__ GLogItem ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (GLogItem * VAR_0)
{
  if (VAR_0->agent != ((void*)0))
    FUNC_0 (VAR_0->agent);
  if (VAR_0->browser != ((void*)0))
    FUNC_0 (VAR_0->browser);
  if (VAR_0->browser_type != ((void*)0))
    FUNC_0 (VAR_0->browser_type);
  if (VAR_0->continent != ((void*)0))
    FUNC_0 (VAR_0->continent);
  if (VAR_0->country != ((void*)0))
    FUNC_0 (VAR_0->country);
  if (VAR_0->date != ((void*)0))
    FUNC_0 (VAR_0->date);
  if (VAR_0->errstr != ((void*)0))
    FUNC_0 (VAR_0->errstr);
  if (VAR_0->host != ((void*)0))
    FUNC_0 (VAR_0->host);
  if (VAR_0->keyphrase != ((void*)0))
    FUNC_0 (VAR_0->keyphrase);
  if (VAR_0->method != ((void*)0))
    FUNC_0 (VAR_0->method);
  if (VAR_0->os != ((void*)0))
    FUNC_0 (VAR_0->os);
  if (VAR_0->os_type != ((void*)0))
    FUNC_0 (VAR_0->os_type);
  if (VAR_0->protocol != ((void*)0))
    FUNC_0 (VAR_0->protocol);
  if (VAR_0->qstr != ((void*)0))
    FUNC_0 (VAR_0->qstr);
  if (VAR_0->ref != ((void*)0))
    FUNC_0 (VAR_0->ref);
  if (VAR_0->req_key != ((void*)0))
    FUNC_0 (VAR_0->req_key);
  if (VAR_0->req != ((void*)0))
    FUNC_0 (VAR_0->req);
  if (VAR_0->status != ((void*)0))
    FUNC_0 (VAR_0->status);
  if (VAR_0->time != ((void*)0))
    FUNC_0 (VAR_0->time);
  if (VAR_0->uniq_key != ((void*)0))
    FUNC_0 (VAR_0->uniq_key);
  if (VAR_0->userid != ((void*)0))
    FUNC_0 (VAR_0->userid);
  if (VAR_0->vhost != ((void*)0))
    FUNC_0 (VAR_0->vhost);

  FUNC_0 (VAR_0);
}
