
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int flags; int hard_header_len; int addr_len; } ;
struct fwnet_header {int h_dest; int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void const*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (unsigned short,int *) ;
 struct fwnet_header* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct net_device *VAR_3,
   unsigned short VAR_4, const void *VAR_5,
   const void *VAR_6, unsigned VAR_7)
{
 struct fwnet_header *VAR_8;

 VAR_8 = FUNC_3(VAR_2, sizeof(*VAR_8));
 FUNC_2(VAR_4, &VAR_8->h_proto);

 if (VAR_3->flags & (VAR_0 | VAR_1)) {
  FUNC_1(VAR_8->h_dest, 0, VAR_3->addr_len);

  return VAR_3->hard_header_len;
 }

 if (VAR_5) {
  FUNC_0(VAR_8->h_dest, VAR_5, VAR_3->addr_len);

  return VAR_3->hard_header_len;
 }

 return -VAR_3->hard_header_len;
}
