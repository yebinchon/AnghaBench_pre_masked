
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {scalar_t__ bio_submitted; } ;
struct flakey_c {scalar_t__ corrupt_bio_rw; int flags; scalar_t__ corrupt_bio_byte; } ;
struct dm_target {struct flakey_c* private; } ;
struct bio {int dummy; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct bio*,struct flakey_c*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct flakey_c*) ;
 struct per_bio_data* FUNC_4 (struct bio*,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_6, struct bio *VAR_7,
    blk_status_t *VAR_8)
{
 struct flakey_c *VAR_9 = VAR_6->private;
 struct per_bio_data *VAR_10 = FUNC_4(VAR_7, sizeof(struct per_bio_data));

 if (FUNC_2(VAR_7) == VAR_5)
  return VAR_1;

 if (!*VAR_8 && VAR_10->bio_submitted && (FUNC_1(VAR_7) == VAR_4)) {
  if (VAR_9->corrupt_bio_byte && (VAR_9->corrupt_bio_rw == VAR_4) &&
      FUNC_0(VAR_7, VAR_9)) {



   FUNC_3(VAR_7, VAR_9);

  } else if (!FUNC_5(VAR_2, &VAR_9->flags) &&
      !FUNC_5(VAR_3, &VAR_9->flags)) {




   *VAR_8 = VAR_0;
  }
 }

 return VAR_1;
}
