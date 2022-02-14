
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flusher_data {unsigned long addr1; unsigned long addr2; } ;
struct TYPE_5__ {int n_aliases; } ;
struct TYPE_8__ {TYPE_1__ icache; } ;
struct TYPE_6__ {unsigned long entry_mask; int ways; scalar_t__ way_incr; } ;
struct TYPE_7__ {TYPE_2__ icache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 () ;
 TYPE_4__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(void *VAR_7)
{
 struct flusher_data *VAR_8 = VAR_7;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = VAR_8->addr1;
 VAR_10 = VAR_8->addr2;


 if (((VAR_10 - VAR_9) >> VAR_3) >= VAR_2) {
  FUNC_4(((void*)0));
  return;
 }





 VAR_9 &= ~(VAR_1-1);
 VAR_10 += VAR_1-1;
 VAR_10 &= ~(VAR_1-1);

 FUNC_6(VAR_11);
 FUNC_3();

 for (VAR_12 = VAR_9; VAR_12 < VAR_10; VAR_12 += VAR_1) {
  unsigned long VAR_14;
  int VAR_15, VAR_16;

  FUNC_0(VAR_12);

  VAR_14 = VAR_0 | (VAR_12 &
    VAR_6->icache.entry_mask);


  VAR_16 = VAR_5.icache.n_aliases;
  for (VAR_13 = 0; VAR_13 < VAR_6->icache.ways; VAR_13++) {
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    FUNC_1(0, VAR_14 + (VAR_15 * VAR_4));
   VAR_14 += VAR_6->icache.way_incr;
  }
 }

 FUNC_2();
 FUNC_5(VAR_11);
}
