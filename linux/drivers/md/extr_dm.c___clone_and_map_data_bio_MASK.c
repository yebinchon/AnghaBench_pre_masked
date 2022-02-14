
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target_io {unsigned int* len_ptr; } ;
struct dm_target {int dummy; } ;
struct clone_info {struct bio* bio; } ;
struct bio {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_target_io*) ;
 struct dm_target_io* FUNC_1 (struct clone_info*,struct dm_target*,int ,int ) ;
 int FUNC_2 (struct dm_target_io*,struct bio*,int ,unsigned int) ;
 int FUNC_3 (struct dm_target_io*) ;

__attribute__((used)) static int FUNC_4(struct clone_info *VAR_1, struct dm_target *VAR_2,
        sector_t VAR_3, unsigned *VAR_4)
{
 struct bio *VAR_5 = VAR_1->bio;
 struct dm_target_io *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2, 0, VAR_0);
 VAR_6->len_ptr = VAR_4;
 VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_3, *VAR_4);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6);
  return VAR_7;
 }
 (void) FUNC_0(VAR_6);

 return 0;
}
