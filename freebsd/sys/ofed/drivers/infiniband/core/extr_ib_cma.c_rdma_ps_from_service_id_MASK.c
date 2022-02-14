
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
typedef int __be64 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static enum rdma_port_space FUNC_1(__be64 VAR_0)
{
 return (FUNC_0(VAR_0) >> 16) & 0xffff;
}
