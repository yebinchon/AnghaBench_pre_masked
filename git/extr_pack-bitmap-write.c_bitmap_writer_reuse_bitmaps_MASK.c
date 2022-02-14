
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packing_data {int repo; } ;
struct bitmap_index {int dummy; } ;
struct TYPE_2__ {int show_progress; int reused; } ;


 int FUNC_0 () ;
 struct bitmap_index* FUNC_1 (int ) ;
 int FUNC_2 (struct bitmap_index*,struct packing_data*,int ,int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_3(struct packing_data *VAR_1)
{
 struct bitmap_index *VAR_2;
 if (!(VAR_2 = FUNC_1(VAR_1->repo)))
  return;

 VAR_0.reused = FUNC_0();
 FUNC_2(VAR_2, VAR_1, VAR_0.reused,
     VAR_0.show_progress);




}
