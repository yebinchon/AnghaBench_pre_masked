
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; } ;
struct mapped_device {int dummy; } ;
struct dm_rq_target_io {int error; struct mapped_device* md; struct request* clone; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*,int ,int) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct mapped_device*,struct request*) ;
 struct dm_rq_target_io* FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_1)
{
 bool VAR_2 = 1;
 struct dm_rq_target_io *VAR_3 = FUNC_4(VAR_1);
 struct request *VAR_4 = VAR_3->clone;

 if (!VAR_4) {
  struct mapped_device *VAR_5 = VAR_3->md;

  FUNC_3(VAR_5, VAR_1);
  FUNC_0(VAR_1, VAR_3->error);
  FUNC_2(VAR_5);
  return;
 }

 if (VAR_1->rq_flags & VAR_0)
  VAR_2 = 0;

 FUNC_1(VAR_4, VAR_3->error, VAR_2);
}
