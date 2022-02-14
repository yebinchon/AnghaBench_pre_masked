
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_log {int dummy; } ;
struct TYPE_2__ {scalar_t__ bi_size; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;

int FUNC_1(struct r5l_log *VAR_2, struct bio *VAR_3)
{
 if (VAR_3->bi_iter.bi_size == 0) {
  FUNC_0(VAR_3);
  return 0;
 }
 VAR_3->bi_opf &= ~VAR_1;
 return -VAR_0;
}
