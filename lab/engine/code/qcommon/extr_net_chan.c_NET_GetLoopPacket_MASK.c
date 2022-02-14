
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int qboolean ;
typedef size_t netsrc_t ;
struct TYPE_10__ {int type; } ;
typedef TYPE_2__ netadr_t ;
struct TYPE_11__ {int cursize; int data; } ;
typedef TYPE_3__ msg_t ;
struct TYPE_12__ {int send; int get; TYPE_1__* msgs; } ;
typedef TYPE_4__ loopback_t ;
struct TYPE_9__ {int datalen; int data; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_2 (netsrc_t VAR_5, netadr_t *VAR_6, msg_t *VAR_7)
{
 int VAR_8;
 loopback_t *VAR_9;

 VAR_9 = &VAR_2[VAR_5];

 if (VAR_9->send - VAR_9->get > VAR_0)
  VAR_9->get = VAR_9->send - VAR_0;

 if (VAR_9->get >= VAR_9->send)
  return VAR_3;

 VAR_8 = VAR_9->get & (VAR_0-1);
 VAR_9->get++;

 FUNC_0 (VAR_7->data, VAR_9->msgs[VAR_8].data, VAR_9->msgs[VAR_8].datalen);
 VAR_7->cursize = VAR_9->msgs[VAR_8].datalen;
 FUNC_1 (VAR_6, 0, sizeof(*VAR_6));
 VAR_6->type = VAR_1;
 return VAR_4;

}
