
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct dev_dax* private_data; } ;
struct dev_dax {struct dax_region* region; } ;
struct dax_region {unsigned long align; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(struct file *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5,
  unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct dev_dax *VAR_13 = VAR_2 ? VAR_2->private_data : ((void*)0);
 struct dax_region *VAR_14;

 if (!VAR_13 || VAR_3)
  goto out;

 VAR_14 = VAR_13->region;
 VAR_12 = VAR_14->align;
 VAR_7 = VAR_5 << VAR_0;
 VAR_8 = VAR_7 + VAR_4;
 VAR_9 = FUNC_1(VAR_7, VAR_12);

 if ((VAR_8 <= VAR_9) || ((VAR_8 - VAR_9) < VAR_12))
  goto out;

 VAR_10 = VAR_4 + VAR_12;
 if ((VAR_7 + VAR_10) < VAR_7)
  goto out;

 VAR_11 = VAR_1->mm->get_unmapped_area(VAR_2, VAR_3, VAR_10,
   VAR_5, VAR_6);
 if (!FUNC_0(VAR_11)) {
  VAR_11 += (VAR_7 - VAR_11) & (VAR_12 - 1);
  return VAR_11;
 }
 out:
 return VAR_1->mm->get_unmapped_area(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
