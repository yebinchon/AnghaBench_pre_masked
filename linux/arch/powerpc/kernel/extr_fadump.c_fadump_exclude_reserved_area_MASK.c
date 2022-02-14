
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ reserve_dump_area_start; scalar_t__ reserve_dump_area_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_4 = VAR_1.reserve_dump_area_start;
 VAR_5 = VAR_4 + VAR_1.reserve_dump_area_size;

 if ((VAR_4 < VAR_3) && (VAR_5 > VAR_2)) {
  if ((VAR_2 < VAR_4) && (VAR_3 > VAR_5)) {
   VAR_6 = FUNC_0(&VAR_0,
         VAR_2, VAR_4);
   if (VAR_6)
    return VAR_6;

   VAR_6 = FUNC_0(&VAR_0,
         VAR_5, VAR_3);
  } else if (VAR_2 < VAR_4) {
   VAR_6 = FUNC_0(&VAR_0,
         VAR_2, VAR_4);
  } else if (VAR_5 < VAR_3) {
   VAR_6 = FUNC_0(&VAR_0,
         VAR_5, VAR_3);
  }
 } else
  VAR_6 = FUNC_0(&VAR_0, VAR_2, VAR_3);

 return VAR_6;
}
