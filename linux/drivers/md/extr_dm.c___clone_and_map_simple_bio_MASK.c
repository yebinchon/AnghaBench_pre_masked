
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;
struct dm_target_io {unsigned int* len_ptr; struct bio clone; } ;
struct clone_info {int sector; int bio; } ;
typedef int blk_qc_t ;


 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct dm_target_io*) ;
 int FUNC_2 (struct bio*,int ,unsigned int) ;

__attribute__((used)) static blk_qc_t FUNC_3(struct clone_info *VAR_0,
        struct dm_target_io *VAR_1, unsigned *VAR_2)
{
 struct bio *VAR_3 = &VAR_1->clone;

 VAR_1->len_ptr = VAR_2;

 FUNC_0(VAR_3, VAR_0->bio);
 if (VAR_2)
  FUNC_2(VAR_3, VAR_0->sector, *VAR_2);

 return FUNC_1(VAR_1);
}
