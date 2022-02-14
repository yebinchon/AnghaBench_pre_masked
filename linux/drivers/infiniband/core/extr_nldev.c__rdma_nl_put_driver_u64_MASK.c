
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
typedef enum rdma_nldev_print_type { ____Placeholder_rdma_nldev_print_type } rdma_nldev_print_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, const char *VAR_4,
       enum rdma_nldev_print_type VAR_5,
       u64 VAR_6)
{
 if (FUNC_1(VAR_3, VAR_4, VAR_5))
  return -VAR_0;
 if (FUNC_0(VAR_3, VAR_1, VAR_6,
         VAR_2))
  return -VAR_0;

 return 0;
}
