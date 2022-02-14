
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct egpio_info {int nchips; int reg_shift; int reg_mask; struct egpio_chip* chip; } ;
struct TYPE_2__ {int ngpio; } ;
struct egpio_chip {int is_out; int reg_start; int cached_values; TYPE_1__ chip; } ;


 int FUNC_0 (struct egpio_info*,int) ;
 int FUNC_1 (struct egpio_info*,int) ;
 int FUNC_2 (int,struct egpio_info*,int) ;
 int FUNC_3 (char*,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct egpio_info *VAR_0)
{
 int VAR_1;
 struct egpio_chip *VAR_2;
 int VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->nchips; VAR_1++) {
  VAR_2 = &(VAR_0->chip[VAR_1]);
  if (!VAR_2->is_out)
   continue;

  for (VAR_3 = 0; VAR_3 < VAR_2->chip.ngpio;
    VAR_3 += (1<<VAR_0->reg_shift)) {

   int VAR_4 = VAR_2->reg_start + FUNC_0(VAR_0, VAR_3);

   if (!((VAR_2->is_out >> VAR_3) & VAR_0->reg_mask))
    continue;

   FUNC_3("EGPIO: setting %x to %x, was %x\n", VAR_4,
    (VAR_2->cached_values >> VAR_3) & VAR_0->reg_mask,
    FUNC_1(VAR_0, VAR_4));

   FUNC_2((VAR_2->cached_values >> VAR_3)
     & VAR_0->reg_mask, VAR_0, VAR_4);
  }
 }
}
