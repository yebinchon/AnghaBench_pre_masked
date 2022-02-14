
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gmap {TYPE_1__* mm; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct gmap*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct gmap*,unsigned long) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,unsigned long,unsigned int,int*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct gmap *VAR_2, unsigned long VAR_3,
        unsigned int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 bool VAR_7;

 FUNC_3(&VAR_2->mm->mmap_sem);

retry:
 VAR_7 = 0;
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_0(VAR_5)) {
  VAR_6 = VAR_5;
  goto out_up;
 }
 if (FUNC_4(VAR_1, VAR_2->mm, VAR_5, VAR_4,
        &VAR_7)) {
  VAR_6 = -VAR_0;
  goto out_up;
 }




 if (VAR_7)
  goto retry;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);
out_up:
 FUNC_5(&VAR_2->mm->mmap_sem);
 return VAR_6;
}
