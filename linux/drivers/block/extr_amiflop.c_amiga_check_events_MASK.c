
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {struct amiga_floppy_struct* private_data; } ;
struct amiga_floppy_struct {int track; scalar_t__ dirty; } ;
struct TYPE_2__ {int pra; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 struct amiga_floppy_struct* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static unsigned FUNC_5(struct gendisk *VAR_6, unsigned int VAR_7)
{
 struct amiga_floppy_struct *VAR_8 = VAR_6->private_data;
 int VAR_9 = VAR_8 - VAR_3;
 int VAR_10;
 static int VAR_11 = 1;

 if (VAR_11)
  VAR_10 = VAR_11--;
 else {
  FUNC_3(VAR_9);
  FUNC_2 (VAR_9);
  VAR_10 = !(VAR_2.pra & VAR_1);
  FUNC_0 (VAR_9);
  FUNC_4();
 }

 if (VAR_10) {
  FUNC_1(VAR_9);
  VAR_8->track = -1;
  VAR_8->dirty = 0;
  VAR_5 = 0;
  VAR_4 = 0;
  return VAR_0;
 }
 return 0;
}
