
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {int rh; } ;
struct mirror {int error_count; } ;
struct bio_list {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int region_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (struct bio_list*) ;
 struct mirror* FUNC_3 (struct mirror_set*,int ) ;
 int FUNC_4 (int ,struct bio*) ;
 struct mirror* FUNC_5 (struct mirror_set*) ;
 scalar_t__ FUNC_6 (struct mirror*) ;
 int FUNC_7 (struct mirror*,struct bio*) ;
 struct mirror* FUNC_8 (struct mirror_set*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct mirror_set *VAR_0, struct bio_list *VAR_1)
{
 region_t VAR_2;
 struct bio *VAR_3;
 struct mirror *VAR_4;

 while ((VAR_3 = FUNC_2(VAR_1))) {
  VAR_2 = FUNC_4(VAR_0->rh, VAR_3);
  VAR_4 = FUNC_5(VAR_0);




  if (FUNC_6(FUNC_8(VAR_0, VAR_2, 1)))
   VAR_4 = FUNC_3(VAR_0, VAR_3->bi_iter.bi_sector);
  else if (VAR_4 && FUNC_0(&VAR_4->error_count))
   VAR_4 = ((void*)0);

  if (FUNC_6(VAR_4))
   FUNC_7(VAR_4, VAR_3);
  else
   FUNC_1(VAR_3);
 }
}
