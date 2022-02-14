
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pxa910_clk_unit {scalar_t__ apbc_base; } ;
struct mmp_clk_reset_cell {int bits; int lock; scalar_t__ flags; scalar_t__ reg; int clk_id; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int lock; scalar_t__ offset; int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct mmp_clk_reset_cell* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct device_node*,struct mmp_clk_reset_cell*,int) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_3,
    struct pxa910_clk_unit *VAR_4)
{
 struct mmp_clk_reset_cell *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_1);
 VAR_9 = FUNC_0(VAR_2);
 VAR_10 = VAR_8 + VAR_9;
 VAR_5 = FUNC_1(VAR_10, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_5[VAR_7 + VAR_6].clk_id = VAR_1[VAR_6].id;
  VAR_5[VAR_7 + VAR_6].reg =
   VAR_4->apbc_base + VAR_1[VAR_6].offset;
  VAR_5[VAR_7 + VAR_6].flags = 0;
  VAR_5[VAR_7 + VAR_6].lock = VAR_1[VAR_6].lock;
  VAR_5[VAR_7 + VAR_6].bits = 0x4;
 }

 VAR_7 = VAR_8;
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  VAR_5[VAR_7 + VAR_6].clk_id = VAR_2[VAR_6].id;
  VAR_5[VAR_7 + VAR_6].reg =
   VAR_4->apbc_base + VAR_1[VAR_6].offset;
  VAR_5[VAR_7 + VAR_6].flags = 0;
  VAR_5[VAR_7 + VAR_6].lock = VAR_1[VAR_6].lock;
  VAR_5[VAR_7 + VAR_6].bits = 0x4;
 }

 FUNC_2(VAR_3, VAR_5, VAR_10);
}
