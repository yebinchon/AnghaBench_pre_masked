
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union rdma_network_hdr {int dummy; } rdma_network_hdr ;
typedef int u8 ;
struct ib_grh {scalar_t__ next_hdr; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_network_type { ____Placeholder_rdma_network_type } rdma_network_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union rdma_network_hdr*) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;

__attribute__((used)) static enum rdma_network_type FUNC_2(struct ib_device *VAR_5,
           u8 VAR_6,
           const struct ib_grh *VAR_7)
{
 int VAR_8;

 if (FUNC_1(VAR_5, VAR_6))
  return VAR_1;

 VAR_8 = FUNC_0((union rdma_network_hdr *)VAR_7);

 if (VAR_8 == 4)
  return VAR_2;

 if (VAR_7->next_hdr == VAR_0)
  return VAR_3;

 return VAR_4;
}
