
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sg_table {int dummy; } ;
struct vmw_private {int capabilities; } ;
struct vmw_piter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vmw_private*,struct vmw_piter*,unsigned long,int) ;
 int FUNC_2 (struct vmw_piter*) ;
 int FUNC_3 (struct vmw_piter*,struct vmw_sg_table const*,int ) ;

int FUNC_4(struct vmw_private *VAR_2,
   const struct vmw_sg_table *VAR_3,
   unsigned long VAR_4,
   int VAR_5)
{
 struct vmw_piter VAR_6;

 FUNC_3(&VAR_6, VAR_3, 0);

 if (FUNC_0(!FUNC_2(&VAR_6)))
  return 0;

 if (FUNC_0(!(VAR_2->capabilities & VAR_1)))
  return -VAR_0;

 return FUNC_1(VAR_2, &VAR_6, VAR_4, VAR_5);
}
