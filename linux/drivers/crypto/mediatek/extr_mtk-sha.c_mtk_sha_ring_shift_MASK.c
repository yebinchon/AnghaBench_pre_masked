
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ring {scalar_t__ cmd_next; scalar_t__ cmd_base; scalar_t__ res_base; scalar_t__ res_next; } ;
struct mtk_desc {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct mtk_ring *VAR_1,
          struct mtk_desc **VAR_2,
          struct mtk_desc **VAR_3,
          int *VAR_4)
{
 *VAR_2 = VAR_1->cmd_next++;
 *VAR_3 = VAR_1->res_next++;
 (*VAR_4)++;

 if (VAR_1->cmd_next == VAR_1->cmd_base + VAR_0) {
  VAR_1->cmd_next = VAR_1->cmd_base;
  VAR_1->res_next = VAR_1->res_base;
 }
}
