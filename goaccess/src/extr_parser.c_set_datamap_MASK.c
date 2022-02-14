
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ list_agents; scalar_t__ append_protocol; scalar_t__ append_method; } ;
struct TYPE_10__ {scalar_t__ uniq_nkey; int data_nkey; int root_nkey; int root; int data; } ;
struct TYPE_9__ {int agent_nkey; int protocol; int method; int serve_time; int resp_size; } ;
struct TYPE_8__ {int (* agent ) (int ,int ,int ) ;int (* protocol ) (int ,int ,int ) ;int (* method ) (int ,int ,int ) ;int (* maxts ) (int ,int ,int ) ;int (* cumts ) (int ,int ,int ) ;int (* bw ) (int ,int ,int ) ;int (* visitor ) (int ,int ) ;int (* hits ) (int ,int ) ;int (* rootmap ) (int ,int ,int ) ;int (* datamap ) (int ,int ,int ) ;int module; } ;
typedef TYPE_1__ GParse ;
typedef int GModule ;
typedef TYPE_2__ GLogItem ;
typedef TYPE_3__ GKeyData ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11 (GLogItem * VAR_1, GKeyData * VAR_2, const GParse * VAR_3)
{
  GModule VAR_4;
  VAR_4 = VAR_3->module;


  VAR_3->datamap (VAR_2->data_nkey, VAR_2->data, VAR_4);


  if (VAR_3->rootmap) {
    VAR_3->rootmap (VAR_2->root_nkey, VAR_2->root, VAR_4);
    FUNC_0 (VAR_2->data_nkey, VAR_2->root_nkey, VAR_4);
  }

  if (VAR_3->hits)
    VAR_3->hits (VAR_2->data_nkey, VAR_4);

  if (VAR_3->visitor && VAR_2->uniq_nkey != 0)
    VAR_3->visitor (VAR_2->data_nkey, VAR_4);

  if (VAR_3->bw)
    VAR_3->bw (VAR_2->data_nkey, VAR_1->resp_size, VAR_4);

  if (VAR_3->cumts)
    VAR_3->cumts (VAR_2->data_nkey, VAR_1->serve_time, VAR_4);

  if (VAR_3->maxts)
    VAR_3->maxts (VAR_2->data_nkey, VAR_1->serve_time, VAR_4);

  if (VAR_3->method && VAR_0.append_method)
    VAR_3->method (VAR_2->data_nkey, VAR_1->method, VAR_4);

  if (VAR_3->protocol && VAR_0.append_protocol)
    VAR_3->protocol (VAR_2->data_nkey, VAR_1->protocol, VAR_4);

  if (VAR_3->agent && VAR_0.list_agents)
    VAR_3->agent (VAR_2->data_nkey, VAR_1->agent_nkey, VAR_4);
}
