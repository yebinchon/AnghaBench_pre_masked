
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_dev_state {scalar_t__ conn; } ;
struct seq_file {int dummy; } ;
struct drbd_device {int rs_last_mark; unsigned long* rs_mark_time; unsigned long* rs_mark_left; unsigned long rs_start; unsigned long rs_paused; unsigned long c_sync_rate; unsigned long ov_left; unsigned long long ov_stop_sector; unsigned long bm_resync_fo; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (struct drbd_device*,union drbd_dev_state,unsigned long*,unsigned long*,unsigned int*) ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,unsigned long) ;
 int FUNC_5 (struct seq_file*,char) ;
 int FUNC_6 (struct seq_file*,char*) ;
 scalar_t__ FUNC_7 (struct drbd_device*) ;

__attribute__((used)) static void FUNC_8(struct drbd_device *VAR_10, struct seq_file *VAR_11,
  union drbd_dev_state VAR_12)
{
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23 = 0;

 FUNC_2(VAR_10, VAR_12, &VAR_17, &VAR_18, &VAR_19);

 VAR_21 = VAR_19/50;
 VAR_22 = 20-VAR_21;
 FUNC_6(VAR_11, "\t[");
 for (VAR_20 = 1; VAR_20 < VAR_21; VAR_20++)
  FUNC_5(VAR_11, '=');
 FUNC_5(VAR_11, '>');
 for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
  FUNC_5(VAR_11, '.');
 FUNC_6(VAR_11, "] ");

 if (VAR_12.conn == VAR_3 || VAR_12.conn == VAR_4)
  FUNC_6(VAR_11, "verified:");
 else
  FUNC_6(VAR_11, "sync'ed:");
 FUNC_3(VAR_11, "%3u.%u%% ", VAR_19 / 10, VAR_19 % 10);


 if (VAR_17 > (4UL << (30 - VAR_0)))
  FUNC_3(VAR_11, "(%lu/%lu)M",
       (unsigned long) FUNC_0(VAR_18 >> 10),
       (unsigned long) FUNC_0(VAR_17 >> 10));
 else
  FUNC_3(VAR_11, "(%lu/%lu)K",
       (unsigned long) FUNC_0(VAR_18),
       (unsigned long) FUNC_0(VAR_17));

 FUNC_6(VAR_11, "\n\t");
 VAR_20 = (VAR_10->rs_last_mark + 2) % VAR_5;
 VAR_14 = (VAR_9 - VAR_10->rs_mark_time[VAR_20]) / VAR_6;
 if (VAR_14 > 180)
  VAR_23 = 1;

 if (!VAR_14)
  VAR_14++;
 VAR_13 = VAR_10->rs_mark_left[VAR_20] - VAR_18;
 VAR_16 = (VAR_14 * (VAR_18 / (VAR_13/100+1)))/100;

 FUNC_3(VAR_11, "finish: %lu:%02lu:%02lu",
  VAR_16 / 3600, (VAR_16 % 3600) / 60, VAR_16 % 60);

 VAR_15 = FUNC_0(VAR_13/VAR_14);
 FUNC_6(VAR_11, " speed: ");
 FUNC_4(VAR_11, VAR_15);
 FUNC_6(VAR_11, " (");

 if (VAR_8 >= 1) {

  VAR_20 = (VAR_10->rs_last_mark + VAR_5-1) % VAR_5;
  VAR_14 = (VAR_9 - VAR_10->rs_mark_time[VAR_20]) / VAR_6;
  if (!VAR_14)
   VAR_14++;
  VAR_13 = VAR_10->rs_mark_left[VAR_20] - VAR_18;
  VAR_15 = FUNC_0(VAR_13/VAR_14);
  FUNC_4(VAR_11, VAR_15);
  FUNC_6(VAR_11, " -- ");
 }




 VAR_14 = (VAR_9 - VAR_10->rs_start - VAR_10->rs_paused) / VAR_6;
 if (VAR_14 == 0)
  VAR_14 = 1;
 VAR_13 = VAR_17 - VAR_18;
 VAR_15 = FUNC_0(VAR_13/VAR_14);
 FUNC_4(VAR_11, VAR_15);
 FUNC_5(VAR_11, ')');

 if (VAR_12.conn == VAR_2 ||
     VAR_12.conn == VAR_3) {
  FUNC_6(VAR_11, " want: ");
  FUNC_4(VAR_11, VAR_10->c_sync_rate);
 }
 FUNC_3(VAR_11, " K/sec%s\n", VAR_23 ? " (stalled)" : "");

 if (VAR_8 >= 1) {


  unsigned long VAR_24 = FUNC_1(VAR_10);
  unsigned long VAR_25;
  unsigned long long VAR_26 = 0;
  if (VAR_12.conn == VAR_3 ||
      VAR_12.conn == VAR_4) {
   VAR_25 = VAR_24 - VAR_10->ov_left;
   if (FUNC_7(VAR_10))
    VAR_26 = VAR_10->ov_stop_sector;
  } else
   VAR_25 = VAR_10->bm_resync_fo;


  FUNC_3(VAR_11,
   "\t%3d%% sector pos: %llu/%llu",
   (int)(VAR_25 / (VAR_24/100+1)),
   (unsigned long long)VAR_25 * VAR_1,
   (unsigned long long)VAR_24 * VAR_1);
  if (VAR_26 != 0 && VAR_26 != VAR_7)
   FUNC_3(VAR_11, " stop sector: %llu", VAR_26);
  FUNC_5(VAR_11, '\n');
 }
}
