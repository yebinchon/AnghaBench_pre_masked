
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ata_taskfile {int flags; scalar_t__ command; void* protocol; } ;
struct ata_device {int flags; scalar_t__ multi_count; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;

__attribute__((used)) static int FUNC_0(struct ata_taskfile *VAR_8, struct ata_device *VAR_9)
{
 u8 VAR_10;

 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_12 = (VAR_8->flags & VAR_4) ? 4 : 0;
 VAR_13 = (VAR_8->flags & VAR_5) ? 2 : 0;
 VAR_14 = (VAR_8->flags & VAR_6) ? 1 : 0;

 if (VAR_9->flags & VAR_0) {
  VAR_8->protocol = VAR_3;
  VAR_11 = VAR_9->multi_count ? 0 : 8;
 } else if (VAR_13 && (VAR_9->link->ap->flags & VAR_1)) {

  VAR_8->protocol = VAR_3;
  VAR_11 = VAR_9->multi_count ? 0 : 8;
 } else {
  VAR_8->protocol = VAR_2;
  VAR_11 = 16;
 }

 VAR_10 = VAR_7[VAR_11 + VAR_12 + VAR_13 + VAR_14];
 if (VAR_10) {
  VAR_8->command = VAR_10;
  return 0;
 }
 return -1;
}
