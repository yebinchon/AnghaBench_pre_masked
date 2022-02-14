
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct bitmap {TYPE_1__ counts; scalar_t__ allclean; } ;
typedef int sector_t ;
typedef int bitmap_counter_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int* FUNC_1 (TYPE_1__*,int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct bitmap *VAR_1, sector_t VAR_2, int VAR_3)
{





 sector_t VAR_4;
 bitmap_counter_t *VAR_5;
 FUNC_3(&VAR_1->counts.lock);
 VAR_5 = FUNC_1(&VAR_1->counts, VAR_2, &VAR_4, 1);
 if (!VAR_5) {
  FUNC_4(&VAR_1->counts.lock);
  return;
 }
 if (!*VAR_5) {
  *VAR_5 = 2;
  FUNC_0(&VAR_1->counts, VAR_2, 1);
  FUNC_2(&VAR_1->counts, VAR_2);
  VAR_1->allclean = 0;
 }
 if (VAR_3)
  *VAR_5 |= VAR_0;
 FUNC_4(&VAR_1->counts.lock);
}
