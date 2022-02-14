
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gmap {TYPE_1__* mm; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gmap*) ;
 int FUNC_2 (struct gmap*,unsigned long,unsigned long,int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct gmap *VAR_5, unsigned long VAR_6,
    unsigned long VAR_7, int VAR_8)
{
 int VAR_9;

 if ((VAR_6 & ~VAR_3) || (VAR_7 & ~VAR_3) || FUNC_1(VAR_5))
  return -VAR_0;
 if (!VAR_2 && VAR_8 == VAR_4)
  return -VAR_0;
 FUNC_0(&VAR_5->mm->mmap_sem);
 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_1);
 FUNC_3(&VAR_5->mm->mmap_sem);
 return VAR_9;
}
