
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_2__* VAR_5 ;

unsigned long FUNC_0(struct file *VAR_6, unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9, unsigned long VAR_10)
{
 unsigned long VAR_11, VAR_12 = -VAR_0;
 unsigned long (*VAR_13)(struct file *, unsigned long,
      unsigned long, unsigned long, unsigned long);

 VAR_13 = VAR_5->mm->get_unmapped_area;

 if (VAR_10 & VAR_1) {

  return VAR_13(((void*)0), VAR_7, VAR_8, VAR_9, VAR_10);
 }
 VAR_10 &= ~VAR_2;

 VAR_11 = VAR_4;
 if (VAR_8 >= (4UL * 1024 * 1024))
  VAR_11 = (4UL * 1024 * 1024);
 else if (VAR_8 >= (512UL * 1024))
  VAR_11 = (512UL * 1024);
 else if (VAR_8 >= (64UL * 1024))
  VAR_11 = (64UL * 1024);

 do {
  VAR_12 = VAR_13(((void*)0), VAR_7, VAR_8 + (VAR_11 - VAR_4), VAR_9, VAR_10);
  if (!(VAR_12 & ~VAR_3)) {
   VAR_12 = (VAR_12 + (VAR_11 - 1UL)) & ~(VAR_11 - 1UL);
   break;
  }

  if (VAR_11 == (4UL * 1024 * 1024))
   VAR_11 = (512UL * 1024);
  else if (VAR_11 == (512UL * 1024))
   VAR_11 = (64UL * 1024);
  else
   VAR_11 = VAR_4;
 } while ((VAR_12 & ~VAR_3) && VAR_11 > VAR_4);




 if (VAR_12 & ~VAR_3)
  VAR_12 = VAR_13(((void*)0), VAR_7, VAR_8, VAR_9, VAR_10);

 return VAR_12;
}
