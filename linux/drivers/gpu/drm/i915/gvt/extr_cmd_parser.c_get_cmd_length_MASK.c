
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct cmd_info {int flag; int len; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct cmd_info *VAR_2, u32 VAR_3)
{
 if ((VAR_2->flag & VAR_1) == VAR_0)
  return VAR_2->len;
 else
  return (VAR_3 & ((1U << VAR_2->len) - 1)) + 2;
 return 0;
}
