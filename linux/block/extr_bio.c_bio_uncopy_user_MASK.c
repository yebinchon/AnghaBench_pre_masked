
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_map_data {scalar_t__ is_our_pages; int iter; } ;
struct bio {struct bio_map_data* bi_private; } ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bio*,int ) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (struct bio_map_data*) ;

int FUNC_6(struct bio *VAR_4)
{
 struct bio_map_data *VAR_5 = VAR_4->bi_private;
 int VAR_6 = 0;

 if (!FUNC_2(VAR_4, VAR_0)) {





  if (!VAR_3->mm)
   VAR_6 = -VAR_1;
  else if (FUNC_1(VAR_4) == VAR_2)
   VAR_6 = FUNC_0(VAR_4, VAR_5->iter);
  if (VAR_5->is_our_pages)
   FUNC_3(VAR_4);
 }
 FUNC_5(VAR_5);
 FUNC_4(VAR_4);
 return VAR_6;
}
