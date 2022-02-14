
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct bio* bio; } ;
struct bio {struct bio* bi_next; } ;


 int FUNC_0 (struct bio*) ;

void FUNC_1(struct request *VAR_0)
{
 struct bio *VAR_1;

 while ((VAR_1 = VAR_0->bio) != ((void*)0)) {
  VAR_0->bio = VAR_1->bi_next;

  FUNC_0(VAR_1);
 }
}
