
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_generated {int id; int gckdiv; TYPE_1__* layout; int parent_id; int lock; int regmap; } ;
struct TYPE_2__ {int pid_mask; int gckcss_mask; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct clk_generated *VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;

 FUNC_4(VAR_1->lock, VAR_3);
 FUNC_3(VAR_1->regmap, VAR_1->layout->offset,
       (VAR_1->id & VAR_1->layout->pid_mask));
 FUNC_2(VAR_1->regmap, VAR_1->layout->offset, &VAR_2);
 FUNC_5(VAR_1->lock, VAR_3);

 VAR_1->parent_id = FUNC_1(VAR_1->layout->gckcss_mask, VAR_2);
 VAR_1->gckdiv = FUNC_0(VAR_0, VAR_2);
}
