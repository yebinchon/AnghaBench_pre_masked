
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pfsync_state {scalar_t__ expire; int * bytes; int * packets; void* nat_rule; void* anchor; void* rule; int dst; int src; int creatorid; int id; int sync_flags; int state_flags; int timeout; int log; int direction; void* creation; int rt_addr; int ifname; int af; int proto; TYPE_7__* key; } ;
struct TYPE_15__ {TYPE_5__* ptr; } ;
struct TYPE_13__ {TYPE_3__* ptr; } ;
struct TYPE_11__ {TYPE_1__* ptr; } ;
struct pf_state {scalar_t__ creation; int * bytes; int * packets; TYPE_6__ nat_rule; TYPE_4__ anchor; TYPE_2__ rule; int dst; int src; int creatorid; int id; scalar_t__ nat_src_node; scalar_t__ src_node; int state_flags; int timeout; int log; int direction; int rt_addr; TYPE_9__* kif; TYPE_8__** key; } ;
struct TYPE_18__ {int pfik_name; } ;
struct TYPE_17__ {int af; int proto; int * port; int * addr; } ;
struct TYPE_16__ {int * port; int * addr; } ;
struct TYPE_14__ {int nr; } ;
struct TYPE_12__ {int nr; } ;
struct TYPE_10__ {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct pfsync_state*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct pf_state*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ VAR_4 ;

void
FUNC_7(struct pfsync_state *VAR_5, struct pf_state *VAR_6)
{
 FUNC_1(VAR_5, sizeof(struct pfsync_state));


 VAR_5->key[VAR_3].addr[0] = VAR_6->key[VAR_3]->addr[0];
 VAR_5->key[VAR_3].addr[1] = VAR_6->key[VAR_3]->addr[1];
 VAR_5->key[VAR_3].port[0] = VAR_6->key[VAR_3]->port[0];
 VAR_5->key[VAR_3].port[1] = VAR_6->key[VAR_3]->port[1];
 VAR_5->key[VAR_2].addr[0] = VAR_6->key[VAR_2]->addr[0];
 VAR_5->key[VAR_2].addr[1] = VAR_6->key[VAR_2]->addr[1];
 VAR_5->key[VAR_2].port[0] = VAR_6->key[VAR_2]->port[0];
 VAR_5->key[VAR_2].port[1] = VAR_6->key[VAR_2]->port[1];
 VAR_5->proto = VAR_6->key[VAR_3]->proto;
 VAR_5->af = VAR_6->key[VAR_3]->af;


 FUNC_6(VAR_5->ifname, VAR_6->kif->pfik_name, sizeof(VAR_5->ifname));
 FUNC_0(&VAR_6->rt_addr, &VAR_5->rt_addr, sizeof(VAR_5->rt_addr));
 VAR_5->creation = FUNC_2(VAR_4 - VAR_6->creation);
 VAR_5->expire = FUNC_4(VAR_6);
 if (VAR_5->expire <= VAR_4)
  VAR_5->expire = FUNC_2(0);
 else
  VAR_5->expire = FUNC_2(VAR_5->expire - VAR_4);

 VAR_5->direction = VAR_6->direction;
 VAR_5->log = VAR_6->log;
 VAR_5->timeout = VAR_6->timeout;
 VAR_5->state_flags = VAR_6->state_flags;
 if (VAR_6->src_node)
  VAR_5->sync_flags |= VAR_1;
 if (VAR_6->nat_src_node)
  VAR_5->sync_flags |= VAR_0;

 VAR_5->id = VAR_6->id;
 VAR_5->creatorid = VAR_6->creatorid;
 FUNC_5(&VAR_6->src, &VAR_5->src);
 FUNC_5(&VAR_6->dst, &VAR_5->dst);

 if (VAR_6->rule.ptr == ((void*)0))
  VAR_5->rule = FUNC_2(-1);
 else
  VAR_5->rule = FUNC_2(VAR_6->rule.ptr->nr);
 if (VAR_6->anchor.ptr == ((void*)0))
  VAR_5->anchor = FUNC_2(-1);
 else
  VAR_5->anchor = FUNC_2(VAR_6->anchor.ptr->nr);
 if (VAR_6->nat_rule.ptr == ((void*)0))
  VAR_5->nat_rule = FUNC_2(-1);
 else
  VAR_5->nat_rule = FUNC_2(VAR_6->nat_rule.ptr->nr);

 FUNC_3(VAR_6->packets[0], VAR_5->packets[0]);
 FUNC_3(VAR_6->packets[1], VAR_5->packets[1]);
 FUNC_3(VAR_6->bytes[0], VAR_5->bytes[0]);
 FUNC_3(VAR_6->bytes[1], VAR_5->bytes[1]);

}
