
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pages_stored; int compr_data_size; int same_pages; int huge_pages; } ;
struct zram {TYPE_2__* table; TYPE_1__ stats; int mem_pool; } ;
struct TYPE_4__ {unsigned long flags; scalar_t__ ac_time; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct zram*,int ) ;
 int FUNC_4 (struct zram*,size_t,int ) ;
 int FUNC_5 (struct zram*,size_t) ;
 unsigned long FUNC_6 (struct zram*,size_t) ;
 int FUNC_7 (struct zram*,size_t) ;
 int FUNC_8 (struct zram*,size_t,int ) ;
 int FUNC_9 (struct zram*,size_t,int ) ;
 scalar_t__ FUNC_10 (struct zram*,size_t,int ) ;
 int FUNC_11 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct zram *VAR_6, size_t VAR_7)
{
 unsigned long VAR_8;




 if (FUNC_10(VAR_6, VAR_7, VAR_1))
  FUNC_4(VAR_6, VAR_7, VAR_1);

 if (FUNC_10(VAR_6, VAR_7, VAR_0)) {
  FUNC_4(VAR_6, VAR_7, VAR_0);
  FUNC_1(&VAR_6->stats.huge_pages);
 }

 if (FUNC_10(VAR_6, VAR_7, VAR_5)) {
  FUNC_4(VAR_6, VAR_7, VAR_5);
  FUNC_3(VAR_6, FUNC_5(VAR_6, VAR_7));
  goto out;
 }





 if (FUNC_10(VAR_6, VAR_7, VAR_3)) {
  FUNC_4(VAR_6, VAR_7, VAR_3);
  FUNC_1(&VAR_6->stats.same_pages);
  goto out;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_7);
 if (!VAR_8)
  return;

 FUNC_11(VAR_6->mem_pool, VAR_8);

 FUNC_2(FUNC_7(VAR_6, VAR_7),
   &VAR_6->stats.compr_data_size);
out:
 FUNC_1(&VAR_6->stats.pages_stored);
 FUNC_8(VAR_6, VAR_7, 0);
 FUNC_9(VAR_6, VAR_7, 0);
 FUNC_0(VAR_6->table[VAR_7].flags &
  ~(1UL << VAR_2 | 1UL << VAR_4));
}
