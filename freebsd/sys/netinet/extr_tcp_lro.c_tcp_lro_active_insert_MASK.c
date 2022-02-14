
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lro_head {int dummy; } ;
struct lro_entry {int dummy; } ;
struct lro_ctrl {struct lro_head lro_active; } ;


 int FUNC_0 (struct lro_head*,struct lro_entry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline void
FUNC_1(struct lro_ctrl *VAR_2, struct lro_head *VAR_3,
    struct lro_entry *VAR_4)
{

 FUNC_0(&VAR_2->lro_active, VAR_4, VAR_1);
 FUNC_0(VAR_3, VAR_4, VAR_0);
}
