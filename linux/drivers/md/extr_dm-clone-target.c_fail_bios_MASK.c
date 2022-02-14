
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int dummy; } ;
struct bio {int bi_status; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct bio*) ;
 struct bio* FUNC_1 (struct bio_list*) ;

__attribute__((used)) static void FUNC_2(struct bio_list *VAR_0, blk_status_t VAR_1)
{
 struct bio *VAR_2;

 while ((VAR_2 = FUNC_1(VAR_0))) {
  VAR_2->bi_status = VAR_1;
  FUNC_0(VAR_2);
 }
}
