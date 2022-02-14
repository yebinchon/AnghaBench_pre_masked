
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq {int nr_arg1; int nr_cmd; } ;
struct netmap_priv {int ifname; } ;
struct net_backend {int be_vnet_hdr_len; int fd; scalar_t__ opaque; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,struct nmreq*) ;
 int FUNC_2 (struct nmreq*,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_backend *VAR_2, int VAR_3)
{
 int VAR_4;
 struct nmreq VAR_5;
 struct netmap_priv *VAR_6 = (struct netmap_priv *)VAR_2->opaque;

 FUNC_2(&VAR_5, VAR_6->ifname);
 VAR_5.nr_cmd = VAR_0;
 VAR_5.nr_arg1 = VAR_3;
 VAR_4 = FUNC_1(VAR_2->fd, VAR_1, &VAR_5);
 if (VAR_4) {
  FUNC_0(("Unable to set vnet header length %d\n",
    VAR_3));
  return (VAR_4);
 }

 VAR_2->be_vnet_hdr_len = VAR_3;

 return (0);
}
