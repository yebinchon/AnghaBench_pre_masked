
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_8__ {scalar_t__ reserve_dump_area_start; scalar_t__ reserve_dump_area_size; } ;
struct TYPE_7__ {int mem_range_cnt; TYPE_1__* mem_ranges; } ;
struct TYPE_6__ {scalar_t__ base; scalar_t__ size; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 TYPE_4__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;

 FUNC_2();

 VAR_4 = VAR_0.reserve_dump_area_start;
 VAR_5 = VAR_4 + VAR_0.reserve_dump_area_size;





 VAR_8 = FUNC_0(&VAR_1, VAR_4, VAR_5);
 if (VAR_8 != 0) {





  if (VAR_2 < VAR_5 && VAR_3 > VAR_4) {
   if (VAR_2 < VAR_4)
    FUNC_1(VAR_2, VAR_4);
   if (VAR_3 > VAR_5)
    FUNC_1(VAR_5, VAR_3);
  } else
   FUNC_1(VAR_2, VAR_3);

  return;
 }


 FUNC_3(&VAR_1);


 VAR_6 = VAR_2;
 for (VAR_7 = 0; VAR_7 < VAR_1.mem_range_cnt; VAR_7++) {
  VAR_4 = VAR_1.mem_ranges[VAR_7].base;
  VAR_5 = VAR_4 + VAR_1.mem_ranges[VAR_7].size;

  if (VAR_6 >= VAR_5)
   continue;

  if (VAR_6 < VAR_4)
   FUNC_1(VAR_6, VAR_4);
  VAR_6 = VAR_5;
 }

 if (VAR_6 < VAR_3)
  FUNC_1(VAR_6, VAR_3);
}
