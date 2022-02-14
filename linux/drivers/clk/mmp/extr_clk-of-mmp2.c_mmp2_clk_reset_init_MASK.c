
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mmp_clk_reset_cell {int bits; int lock; scalar_t__ flags; scalar_t__ reg; int clk_id; } ;
struct mmp2_clk_unit {scalar_t__ apbc_base; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int lock; scalar_t__ offset; int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct mmp_clk_reset_cell* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct device_node*,struct mmp_clk_reset_cell*,int) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_2,
    struct mmp2_clk_unit *VAR_3)
{
 struct mmp_clk_reset_cell *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_6, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4[VAR_5].clk_id = VAR_1[VAR_5].id;
  VAR_4[VAR_5].reg = VAR_3->apbc_base + VAR_1[VAR_5].offset;
  VAR_4[VAR_5].flags = 0;
  VAR_4[VAR_5].lock = VAR_1[VAR_5].lock;
  VAR_4[VAR_5].bits = 0x4;
 }

 FUNC_2(VAR_2, VAR_4, VAR_6);
}
