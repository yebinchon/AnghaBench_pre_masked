
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold_block {int threshold_limit; } ;
struct thresh_restart {int set_lvt_off; int lvt_off; struct threshold_block* b; } ;


 int VAR_0 ;
 int FUNC_0 (struct thresh_restart*) ;

__attribute__((used)) static void FUNC_1(struct threshold_block *VAR_1, int VAR_2)
{
 struct thresh_restart VAR_3 = {
  .b = VAR_1,
  .set_lvt_off = 1,
  .lvt_off = VAR_2,
 };

 VAR_1->threshold_limit = VAR_0;
 FUNC_0(&VAR_3);
}
