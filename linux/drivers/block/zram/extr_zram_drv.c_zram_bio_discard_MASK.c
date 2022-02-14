
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int notify_free; } ;
struct zram {TYPE_2__ stats; } ;
struct TYPE_3__ {size_t bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zram*,int ) ;
 int FUNC_2 (struct zram*,int ) ;
 int FUNC_3 (struct zram*,int ) ;

__attribute__((used)) static void FUNC_4(struct zram *VAR_1, u32 VAR_2,
        int VAR_3, struct bio *VAR_4)
{
 size_t VAR_5 = VAR_4->bi_iter.bi_size;
 if (VAR_3) {
  if (VAR_5 <= (VAR_0 - VAR_3))
   return;

  VAR_5 -= (VAR_0 - VAR_3);
  VAR_2++;
 }

 while (VAR_5 >= VAR_0) {
  FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_2);
  FUNC_3(VAR_1, VAR_2);
  FUNC_0(&VAR_1->stats.notify_free);
  VAR_2++;
  VAR_5 -= VAR_0;
 }
}
