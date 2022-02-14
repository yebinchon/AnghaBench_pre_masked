
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5dev {scalar_t__ sector; struct bio* written; } ;
struct r5conf {int mddev; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ) ;
 struct bio* FUNC_2 (struct bio*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct r5conf *VAR_1, struct r5dev *VAR_2)
{
 struct bio *VAR_3, *VAR_4;

 VAR_3 = VAR_2->written;
 VAR_2->written = ((void*)0);
 while (VAR_3 && VAR_3->bi_iter.bi_sector <
        VAR_2->sector + VAR_0) {
  VAR_4 = FUNC_2(VAR_3, VAR_2->sector);
  FUNC_1(VAR_1->mddev);
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }
}
