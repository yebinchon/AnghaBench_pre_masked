
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_node {int flags; } ;
struct its_cmd_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct its_cmd_block*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct its_node *VAR_2, struct its_cmd_block *VAR_3)
{




 if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_3, sizeof(*VAR_3));
 else
  FUNC_0(VAR_1);
}
