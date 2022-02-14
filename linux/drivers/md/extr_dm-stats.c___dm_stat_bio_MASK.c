
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_stats_aux {int dummy; } ;
struct dm_stat {scalar_t__ start; scalar_t__ end; scalar_t__ step; size_t n_entries; int id; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct dm_stat*,size_t,int,scalar_t__,struct dm_stats_aux*,int,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dm_stat *VAR_0, int VAR_1,
     sector_t VAR_2, sector_t VAR_3,
     bool VAR_4, unsigned long VAR_5,
     struct dm_stats_aux *VAR_6)
{
 sector_t VAR_7, VAR_8, VAR_9, VAR_10;
 size_t VAR_11;

 if (VAR_3 <= VAR_0->start || VAR_2 >= VAR_0->end)
  return;
 if (FUNC_4(VAR_2 < VAR_0->start)) {
  VAR_7 = 0;
  VAR_9 = VAR_3 - VAR_0->start;
 } else {
  VAR_7 = VAR_2 - VAR_0->start;
  VAR_9 = VAR_3 - VAR_2;
 }
 if (FUNC_4(VAR_3 > VAR_0->end))
  VAR_9 -= (VAR_3 - VAR_0->end);

 VAR_8 = FUNC_2(VAR_7, VAR_0->step);
 VAR_11 = VAR_7;
 do {
  if (FUNC_1(VAR_11 >= VAR_0->n_entries)) {
   FUNC_0("Invalid area access in region id %d", VAR_0->id);
   return;
  }
  VAR_10 = VAR_9;
  if (VAR_10 > VAR_0->step - VAR_8)
   VAR_10 = VAR_0->step - VAR_8;
  FUNC_3(VAR_0, VAR_11, VAR_1, VAR_10,
      VAR_6, VAR_4, VAR_5);
  VAR_9 -= VAR_10;
  VAR_11++;
  VAR_8 = 0;
 } while (FUNC_4(VAR_9 != 0));
}
