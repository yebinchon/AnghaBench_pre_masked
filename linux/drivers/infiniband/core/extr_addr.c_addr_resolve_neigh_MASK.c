
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {int dummy; } ;
struct rdma_dev_addr {int src_dev_addr; int dst_dev_addr; } ;
struct dst_entry {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dst_entry const*,struct rdma_dev_addr*,struct sockaddr const*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct dst_entry *VAR_3,
         const struct sockaddr *VAR_4,
         struct rdma_dev_addr *VAR_5,
         unsigned int VAR_6,
         u32 VAR_7)
{
 int VAR_8 = 0;

 if (VAR_6 & VAR_0) {
  FUNC_1(VAR_5->dst_dev_addr, VAR_5->src_dev_addr, VAR_2);
 } else {
  if (!(VAR_6 & VAR_1)) {

   VAR_8 = FUNC_0(VAR_3, VAR_5, VAR_4, VAR_7);
  }
 }
 return VAR_8;
}
