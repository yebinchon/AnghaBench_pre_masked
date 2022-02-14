
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_device {int uverbs_cmd_mask; int uverbs_ex_cmd_mask; } ;
typedef int __u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ib_device *VAR_1, __u32 VAR_2)
{
 u64 VAR_3;

 if (VAR_2 <= VAR_0)
  VAR_3 = VAR_1->uverbs_cmd_mask;
 else
  VAR_3 = VAR_1->uverbs_ex_cmd_mask;

 if (VAR_3 & ((u64)1 << VAR_2))
  return 0;

 return -1;
}
