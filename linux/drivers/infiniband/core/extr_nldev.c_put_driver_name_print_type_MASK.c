
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef enum rdma_nldev_print_type { ____Placeholder_rdma_nldev_print_type } rdma_nldev_print_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,char const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4, const char *VAR_5,
          enum rdma_nldev_print_type VAR_6)
{
 if (FUNC_0(VAR_4, VAR_2, VAR_5))
  return -VAR_0;
 if (VAR_6 != VAR_3 &&
     FUNC_1(VAR_4, VAR_1, VAR_6))
  return -VAR_0;

 return 0;
}
