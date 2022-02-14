
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {struct atari_floppy_struct* private_data; } ;
struct atari_floppy_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ wpstat; } ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,int *) ;
 struct atari_floppy_struct* VAR_4 ;

__attribute__((used)) static unsigned int FUNC_1(struct gendisk *VAR_5,
     unsigned int VAR_6)
{
 struct atari_floppy_struct *VAR_7 = VAR_5->private_data;
 unsigned int VAR_8 = VAR_7 - VAR_4;
 if (FUNC_0 (VAR_8, &VAR_3)) {

  return VAR_0;
 }
 if (FUNC_0 (VAR_8, &VAR_2)) {

  return VAR_0;
 }
 if (VAR_1.wpstat) {



  return VAR_0;
 }

 return 0;
}
