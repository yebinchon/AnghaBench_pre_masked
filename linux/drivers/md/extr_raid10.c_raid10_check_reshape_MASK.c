
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raid10_info {int dummy; } ;
struct TYPE_2__ {int far_copies; int far_offset; } ;
struct r10conf {scalar_t__ copies; int * mirrors_new; TYPE_1__ geo; } ;
struct mddev {int array_sectors; scalar_t__ delta_disks; scalar_t__ raid_disks; struct r10conf* private; } ;
struct geom {int far_copies; int chunk_mask; int far_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r10conf*,int) ;
 int VAR_3 ;
 int * FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct geom*,struct mddev*,int ) ;

__attribute__((used)) static int FUNC_4(struct mddev *VAR_4)
{
 struct r10conf *VAR_5 = VAR_4->private;
 struct geom VAR_6;

 if (VAR_5->geo.far_copies != 1 && !VAR_5->geo.far_offset)
  return -VAR_0;

 if (FUNC_3(&VAR_6, VAR_4, VAR_3) != VAR_5->copies)

  return -VAR_0;
 if (VAR_6.far_copies > 1 && !VAR_6.far_offset)

  return -VAR_0;

 if (VAR_4->array_sectors & VAR_6.chunk_mask)

   return -VAR_0;

 if (!FUNC_0(VAR_5, -1))
  return -VAR_0;

 FUNC_2(VAR_5->mirrors_new);
 VAR_5->mirrors_new = ((void*)0);
 if (VAR_4->delta_disks > 0) {

  VAR_5->mirrors_new =
   FUNC_1(VAR_4->raid_disks + VAR_4->delta_disks,
    sizeof(struct raid10_info),
    VAR_2);
  if (!VAR_5->mirrors_new)
   return -VAR_1;
 }
 return 0;
}
