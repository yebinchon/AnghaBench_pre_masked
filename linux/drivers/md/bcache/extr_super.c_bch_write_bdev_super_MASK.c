
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct closure {int dummy; } ;
struct bio {struct cached_dev* bi_private; int bi_end_io; } ;
struct cached_dev {int sb; int bdev; int sb_write_mutex; struct bio sb_bio; struct closure sb_write; } ;


 int FUNC_0 (int *,struct bio*) ;
 int VAR_0 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct closure*) ;
 int FUNC_4 (struct closure*,struct closure*) ;
 int FUNC_5 (struct closure*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

void FUNC_7(struct cached_dev *VAR_2, struct closure *VAR_3)
{
 struct closure *VAR_4 = &VAR_2->sb_write;
 struct bio *VAR_5 = &VAR_2->sb_bio;

 FUNC_6(&VAR_2->sb_write_mutex);
 FUNC_4(VAR_4, VAR_3);

 FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_2->bdev);
 VAR_5->bi_end_io = VAR_1;
 VAR_5->bi_private = VAR_2;

 FUNC_3(VAR_4);

 FUNC_0(&VAR_2->sb, VAR_5);

 FUNC_5(VAR_4, VAR_0);
}
