
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {int * bi_private; int * bi_end_io; } ;
struct TYPE_2__ {struct bio bio; } ;
struct search {int cl; TYPE_1__ bio; } ;
typedef int bio_end_io_t ;


 int FUNC_0 (struct bio*,struct bio*) ;
 int FUNC_1 (struct bio*,int) ;
 int FUNC_2 (struct bio*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct search *VAR_0,
   struct bio *VAR_1,
   bio_end_io_t *VAR_2)
{
 struct bio *VAR_3 = &VAR_0->bio.bio;

 FUNC_2(VAR_3, ((void*)0), 0);
 FUNC_0(VAR_3, VAR_1);






 VAR_3->bi_end_io = VAR_2;
 VAR_3->bi_private = &VAR_0->cl;

 FUNC_1(VAR_3, 3);
}
