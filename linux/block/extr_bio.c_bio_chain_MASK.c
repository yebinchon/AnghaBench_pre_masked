
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bi_end_io; struct bio* bi_private; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bio*) ;

void FUNC_2(struct bio *VAR_1, struct bio *VAR_2)
{
 FUNC_0(VAR_1->bi_private || VAR_1->bi_end_io);

 VAR_1->bi_private = VAR_2;
 VAR_1->bi_end_io = VAR_0;
 FUNC_1(VAR_2);
}
