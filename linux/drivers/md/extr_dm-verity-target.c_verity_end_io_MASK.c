
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_verity_io {int work; TYPE_1__* v; } ;
struct bio {int bi_status; struct dm_verity_io* bi_private; } ;
struct TYPE_2__ {int verify_wq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct dm_verity_io*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1)
{
 struct dm_verity_io *VAR_2 = VAR_1->bi_private;

 if (VAR_1->bi_status && !FUNC_2(VAR_2->v)) {
  FUNC_3(VAR_2, VAR_1->bi_status);
  return;
 }

 FUNC_0(&VAR_2->work, VAR_0);
 FUNC_1(VAR_2->v->verify_wq, &VAR_2->work);
}
