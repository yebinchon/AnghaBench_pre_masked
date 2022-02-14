
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct bitmap {TYPE_1__ counts; } ;
typedef int sector_t ;
typedef int bitmap_counter_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int * FUNC_2 (TYPE_1__*,int,int*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct bitmap *VAR_2, sector_t VAR_3, sector_t *VAR_4,
          int VAR_5)
{
 bitmap_counter_t *VAR_6;
 int VAR_7;
 if (VAR_2 == ((void*)0)) {
  *VAR_4 = 1024;
  return 1;
 }
 FUNC_3(&VAR_2->counts.lock);
 VAR_6 = FUNC_2(&VAR_2->counts, VAR_3, VAR_4, 0);
 VAR_7 = 0;
 if (VAR_6) {

  if (FUNC_1(*VAR_6))
   VAR_7 = 1;
  else if (FUNC_0(*VAR_6)) {
   VAR_7 = 1;
   if (!VAR_5) {
    *VAR_6 |= VAR_1;
    *VAR_6 &= ~VAR_0;
   }
  }
 }
 FUNC_4(&VAR_2->counts.lock);
 return VAR_7;
}
