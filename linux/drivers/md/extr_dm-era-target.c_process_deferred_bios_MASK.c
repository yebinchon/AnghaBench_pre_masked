
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_list {int dummy; } ;
struct era {TYPE_1__* md; int deferred_lock; struct bio_list deferred_bios; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int current_writeset; int bitset_info; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio_list*,struct bio*) ;
 int FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_4 (struct bio_list*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct era*,struct bio*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct era *VAR_0)
{
 int VAR_1;
 struct bio_list VAR_2, VAR_3;
 struct bio *VAR_4;
 bool VAR_5 = 0;
 bool VAR_6 = 0;

 FUNC_2(&VAR_2);
 FUNC_2(&VAR_3);

 FUNC_8(&VAR_0->deferred_lock);
 FUNC_3(&VAR_2, &VAR_0->deferred_bios);
 FUNC_2(&VAR_0->deferred_bios);
 FUNC_9(&VAR_0->deferred_lock);

 while ((VAR_4 = FUNC_4(&VAR_2))) {
  VAR_1 = FUNC_10(&VAR_0->md->bitset_info,
       VAR_0->md->current_writeset,
       FUNC_6(VAR_0, VAR_4));
  if (VAR_1 < 0) {




   VAR_6 = 1;

  } else if (VAR_1 == 0)
   VAR_5 = 1;

  FUNC_1(&VAR_3, VAR_4);
 }

 if (VAR_5) {
  VAR_1 = FUNC_7(VAR_0->md);
  if (VAR_1)
   VAR_6 = 1;
 }

 if (VAR_6)
  while ((VAR_4 = FUNC_4(&VAR_3)))
   FUNC_0(VAR_4);
 else
  while ((VAR_4 = FUNC_4(&VAR_3)))
   FUNC_5(VAR_4);
}
