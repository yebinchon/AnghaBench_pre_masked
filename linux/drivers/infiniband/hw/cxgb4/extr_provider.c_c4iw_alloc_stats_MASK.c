
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rdma_hw_stats {int dummy; } ;
struct ib_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rdma_hw_stats* FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static struct rdma_hw_stats *FUNC_3(struct ib_device *VAR_3,
           u8 VAR_4)
{
 FUNC_1(FUNC_0(VAR_2) != VAR_0);

 if (VAR_4 != 0)
  return ((void*)0);

 return FUNC_2(VAR_2, VAR_0,
       VAR_1);
}
