
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int clr_mask; TYPE_4__* eq; scalar_t__ clr_int; } ;
struct TYPE_6__ {scalar_t__ ecr_base; } ;
struct TYPE_7__ {TYPE_1__ tavor; } ;
struct mthca_dev {TYPE_3__ eq_table; TYPE_2__ eq_regs; } ;
typedef int irqreturn_t ;
struct TYPE_9__ {int eqn_mask; int eqn; int cons_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mthca_dev*,TYPE_4__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mthca_dev*,int ) ;
 int FUNC_3 (struct mthca_dev*,TYPE_4__*,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct mthca_dev *VAR_7 = VAR_6;
 u32 VAR_8;
 int VAR_9;

 if (VAR_7->eq_table.clr_mask)
  FUNC_4(VAR_7->eq_table.clr_mask, VAR_7->eq_table.clr_int);

 VAR_8 = FUNC_1(VAR_7->eq_regs.tavor.ecr_base + 4);
 if (!VAR_8)
  return VAR_1;

 FUNC_4(VAR_8, VAR_7->eq_regs.tavor.ecr_base +
        VAR_3 - VAR_2 + 4);

 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
  if (VAR_8 & VAR_7->eq_table.eq[VAR_9].eqn_mask) {
   if (FUNC_0(VAR_7, &VAR_7->eq_table.eq[VAR_9]))
    FUNC_3(VAR_7, &VAR_7->eq_table.eq[VAR_9],
      VAR_7->eq_table.eq[VAR_9].cons_index);
   FUNC_2(VAR_7, VAR_7->eq_table.eq[VAR_9].eqn);
  }

 return VAR_0;
}
