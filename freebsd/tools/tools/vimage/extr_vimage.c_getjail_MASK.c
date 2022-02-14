
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jailparam {int vnet; int name; int path; int hostname; int domainname; int childcnt; int childmax; int cpuset; int parentjid; int rawsock; int socket_af; int mount; int jid; } ;
typedef struct jailparam vstat_t ;
typedef int params ;


 int FUNC_0 (struct jailparam*,int) ;
 int FUNC_1 (struct jailparam*,int) ;
 int FUNC_2 (struct jailparam*,int,int ) ;
 int FUNC_3 (struct jailparam*,int*,int) ;
 int FUNC_4 (struct jailparam*,char*) ;

__attribute__((used)) static int
FUNC_5(vstat_t *VAR_0, int VAR_1, int VAR_2)
{
 struct jailparam VAR_3[32];
 int VAR_4 = 0;

 FUNC_0(VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_0, sizeof(*VAR_0));

 FUNC_4(&VAR_3[VAR_4], "lastjid");
 FUNC_3(&VAR_3[VAR_4++], &VAR_1, sizeof VAR_1);

 FUNC_4(&VAR_3[VAR_4], "vnet");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->vnet, sizeof(VAR_0->vnet));

 FUNC_4(&VAR_3[VAR_4], "name");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->name, sizeof(VAR_0->name));

 if (VAR_2 == 0)
  goto done;

 FUNC_4(&VAR_3[VAR_4], "path");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->path, sizeof(VAR_0->path));

 FUNC_4(&VAR_3[VAR_4], "host.hostname");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->hostname,
     sizeof(VAR_0->hostname));

 FUNC_4(&VAR_3[VAR_4], "host.domainname");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->domainname,
     sizeof(VAR_0->domainname));

 FUNC_4(&VAR_3[VAR_4], "children.cur");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->childcnt,
     sizeof(VAR_0->childcnt));

 if (VAR_2 == 1)
  goto done;

 FUNC_4(&VAR_3[VAR_4], "children.max");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->childmax,
     sizeof(VAR_0->childmax));

 FUNC_4(&VAR_3[VAR_4], "cpuset.id");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->cpuset,
     sizeof(VAR_0->cpuset));

 FUNC_4(&VAR_3[VAR_4], "parent");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->parentjid,
     sizeof(VAR_0->parentjid));

 FUNC_4(&VAR_3[VAR_4], "allow.raw_sockets");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->rawsock,
     sizeof(VAR_0->rawsock));

 FUNC_4(&VAR_3[VAR_4], "allow.socket_af");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->socket_af,
     sizeof(VAR_0->socket_af));

 FUNC_4(&VAR_3[VAR_4], "allow.mount");
 FUNC_3(&VAR_3[VAR_4++], &VAR_0->mount, sizeof(VAR_0->mount));

done:
 VAR_0->jid = FUNC_2(VAR_3, VAR_4, 0);
 FUNC_1(VAR_3, VAR_4);
 return (VAR_0->jid);
}
