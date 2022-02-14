
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int bio_submitted; } ;
struct flakey_c {unsigned int start_time; unsigned int up_interval; unsigned int down_interval; scalar_t__ corrupt_bio_rw; scalar_t__ corrupt_bio_byte; int flags; } ;
struct dm_target {struct flakey_c* private; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct bio*,struct flakey_c*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,struct flakey_c*) ;
 struct per_bio_data* FUNC_6 (struct bio*,int) ;
 int FUNC_7 (struct dm_target*,struct bio*) ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct dm_target *VAR_10, struct bio *VAR_11)
{
 struct flakey_c *VAR_12 = VAR_10->private;
 unsigned VAR_13;
 struct per_bio_data *VAR_14 = FUNC_6(VAR_11, sizeof(struct per_bio_data));
 VAR_14->bio_submitted = 0;


 if (FUNC_4(VAR_11) == VAR_7)
  goto map_bio;


 VAR_13 = (VAR_9 - VAR_12->start_time) / VAR_5;
 if (VAR_13 % (VAR_12->up_interval + VAR_12->down_interval) >= VAR_12->up_interval) {



  VAR_14->bio_submitted = 1;





  if (FUNC_1(VAR_11) == VAR_6) {
   if (!VAR_12->corrupt_bio_byte && !FUNC_8(VAR_3, &VAR_12->flags) &&
       !FUNC_8(VAR_4, &VAR_12->flags))
    return VAR_0;
   goto map_bio;
  }




  if (FUNC_8(VAR_3, &VAR_12->flags)) {
   FUNC_2(VAR_11);
   return VAR_2;
  }
  else if (FUNC_8(VAR_4, &VAR_12->flags)) {
   FUNC_3(VAR_11);
   return VAR_2;
  }




  if (VAR_12->corrupt_bio_byte && (VAR_12->corrupt_bio_rw == VAR_8)) {
   if (FUNC_0(VAR_11, VAR_12))
    FUNC_5(VAR_11, VAR_12);
   goto map_bio;
  }




  return VAR_0;
 }

map_bio:
 FUNC_7(VAR_10, VAR_11);

 return VAR_1;
}
