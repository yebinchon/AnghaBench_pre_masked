
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rxe_dev {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int FUNC_0 (struct rxe_dev*,int ) ;
 struct rxe_dev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static enum rdma_link_layer FUNC_2(struct ib_device *VAR_0,
            u8 VAR_1)
{
 struct rxe_dev *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
