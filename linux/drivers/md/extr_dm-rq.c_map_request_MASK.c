
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int q; } ;
struct mapped_device {int dummy; } ;
struct dm_target {TYPE_1__* type; } ;
struct dm_rq_target_io {int * clone; int info; struct dm_target* ti; struct request* orig; struct mapped_device* md; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int (* clone_and_map_rq ) (struct dm_target*,struct request*,int *,struct request**) ;int (* release_clone_rq ) (struct request*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;





 int VAR_3 ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (struct request*,struct request*) ;
 int FUNC_8 (struct request*,int ) ;
 int FUNC_9 (struct dm_rq_target_io*,int) ;
 int FUNC_10 (struct request*,struct request*,struct dm_rq_target_io*,int ) ;
 int FUNC_11 (struct dm_target*,struct request*,int *,struct request**) ;
 int FUNC_12 (struct request*,int *) ;
 int FUNC_13 (struct request*,int *) ;
 int FUNC_14 (int ,struct request*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct dm_rq_target_io *VAR_4)
{
 int VAR_5;
 struct dm_target *VAR_6 = VAR_4->ti;
 struct mapped_device *VAR_7 = VAR_4->md;
 struct request *VAR_8 = VAR_4->orig;
 struct request *VAR_9 = ((void*)0);
 blk_status_t VAR_10;

 VAR_5 = VAR_6->type->clone_and_map_rq(VAR_6, VAR_8, &VAR_4->info, &VAR_9);
 switch (VAR_5) {
 case 128:

  break;
 case 130:
  if (FUNC_10(VAR_9, VAR_8, VAR_4, VAR_3)) {

   VAR_6->type->release_clone_rq(VAR_9, &VAR_4->info);
   return 129;
  }


  FUNC_14(VAR_9->q, VAR_9, FUNC_5(FUNC_6(VAR_7)),
         FUNC_3(VAR_8));
  VAR_10 = FUNC_7(VAR_9, VAR_8);
  if (VAR_10 == VAR_2 || VAR_10 == VAR_0) {
   FUNC_4(VAR_9);
   FUNC_2(VAR_9);
   VAR_4->ti->type->release_clone_rq(VAR_9, &VAR_4->info);
   VAR_4->clone = ((void*)0);
   return 129;
  }
  break;
 case 129:

  break;
 case 132:

  FUNC_9(VAR_4, 1);
  break;
 case 131:

  FUNC_8(VAR_8, VAR_1);
  break;
 default:
  FUNC_1("unimplemented target map return value: %d", VAR_5);
  FUNC_0();
 }

 return VAR_5;
}
