
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netmap_priv {char* ifname; int * mevp; TYPE_2__* nmd; void* cb_param; int cb; int rx; int tx; int memid; } ;
struct net_backend {int fd; scalar_t__ opaque; } ;
typedef int net_be_rxeof_t ;
struct TYPE_3__ {int nr_arg2; } ;
struct TYPE_4__ {int fd; int nifp; TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (struct netmap_priv*) ;
 int * FUNC_4 (int ,int ,int ,void*) ;
 TYPE_2__* FUNC_5 (char*,int *,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_8(struct net_backend *VAR_3, const char *VAR_4,
     net_be_rxeof_t VAR_5, void *VAR_6)
{
 struct netmap_priv *VAR_7 = (struct netmap_priv *)VAR_3->opaque;

 FUNC_7(VAR_7->ifname, VAR_4, sizeof(VAR_7->ifname));
 VAR_7->ifname[sizeof(VAR_7->ifname) - 1] = '\0';

 VAR_7->nmd = FUNC_5(VAR_7->ifname, ((void*)0), VAR_1, ((void*)0));
 if (VAR_7->nmd == ((void*)0)) {
  FUNC_2(("Unable to nm_open(): interface '%s', errno (%s)\n",
   VAR_4, FUNC_6(VAR_2)));
  FUNC_3(VAR_7);
  return (-1);
 }

 VAR_7->memid = VAR_7->nmd->req.nr_arg2;
 VAR_7->tx = FUNC_1(VAR_7->nmd->nifp, 0);
 VAR_7->rx = FUNC_0(VAR_7->nmd->nifp, 0);
 VAR_7->cb = VAR_5;
 VAR_7->cb_param = VAR_6;
 VAR_3->fd = VAR_7->nmd->fd;

 VAR_7->mevp = FUNC_4(VAR_3->fd, VAR_0, VAR_5, VAR_6);
 if (VAR_7->mevp == ((void*)0)) {
  FUNC_2(("Could not register event\n"));
  return (-1);
 }

 return (0);
}
