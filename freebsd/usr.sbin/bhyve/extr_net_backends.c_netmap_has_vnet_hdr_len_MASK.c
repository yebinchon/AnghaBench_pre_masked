
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_backend {int be_vnet_hdr_len; } ;


 int FUNC_0 (struct net_backend*,int) ;

__attribute__((used)) static int
FUNC_1(struct net_backend *VAR_0, unsigned VAR_1)
{
 int VAR_2 = VAR_0->be_vnet_hdr_len;
 int VAR_3;

 if (VAR_1 == VAR_2) {
  return (1);
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {
  return (0);
 }

 FUNC_0(VAR_0, VAR_2);

 return (1);
}
