
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vnet {int dummy; } ;
struct TYPE_7__ {struct vnet* net; } ;
struct TYPE_8__ {TYPE_3__ dev_addr; } ;
struct TYPE_5__ {TYPE_4__ addr; } ;
struct TYPE_6__ {TYPE_1__ route; } ;
struct rdma_id_private {TYPE_2__ id; } ;
typedef int rand ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;


 int VAR_0 ;
 int FUNC_0 (int,struct rdma_id_private*,unsigned int) ;
 int FUNC_1 (struct vnet*,int,unsigned short) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (struct vnet*,int*,int*) ;

__attribute__((used)) static int FUNC_4(enum rdma_port_space VAR_1,
         struct rdma_id_private *VAR_2)
{
 static unsigned int VAR_3;
 int VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7;
 struct vnet *VAR_8 = VAR_2->id.route.addr.dev_addr.net;
 u32 VAR_9;

 FUNC_3(VAR_8, &VAR_4, &VAR_5);
 VAR_6 = (VAR_5 - VAR_4) + 1;
 FUNC_2(&VAR_9, sizeof(VAR_9));
 VAR_7 = VAR_9 % VAR_6 + VAR_4;
retry:
 if (VAR_3 != VAR_7 &&
     !FUNC_1(VAR_8, VAR_1, (unsigned short)VAR_7)) {
  int VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_7);




  if (!VAR_10)
   VAR_3 = VAR_7;
  if (VAR_10 != -VAR_0)
   return VAR_10;
 }
 if (--VAR_6) {
  VAR_7++;
  if ((VAR_7 < VAR_4) || (VAR_7 > VAR_5))
   VAR_7 = VAR_4;
  goto retry;
 }
 return -VAR_0;
}
