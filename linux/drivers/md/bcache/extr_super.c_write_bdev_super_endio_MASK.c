
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_dev {int sb_write; } ;
struct bio {scalar_t__ bi_status; struct cached_dev* bi_private; } ;


 int FUNC_0 (struct cached_dev*,struct bio*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct cached_dev *VAR_1 = VAR_0->bi_private;

 if (VAR_0->bi_status)
  FUNC_0(VAR_1, VAR_0);

 FUNC_1(&VAR_1->sb_write);
}
