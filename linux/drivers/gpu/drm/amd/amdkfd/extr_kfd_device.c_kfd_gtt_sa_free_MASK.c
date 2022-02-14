
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_mem_obj {unsigned int range_start; unsigned int range_end; } ;
struct kfd_dev {int gtt_sa_lock; int gtt_sa_bitmap; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct kfd_mem_obj*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct kfd_mem_obj*,unsigned int,unsigned int) ;

int FUNC_5(struct kfd_dev *VAR_0, struct kfd_mem_obj *VAR_1)
{
 unsigned int VAR_2;


 if (!VAR_1)
  return 0;

 FUNC_4("Free mem_obj = %p, range_start = %d, range_end = %d\n",
   VAR_1, VAR_1->range_start, VAR_1->range_end);

 FUNC_2(&VAR_0->gtt_sa_lock);


 for (VAR_2 = VAR_1->range_start;
  VAR_2 <= VAR_1->range_end;
  VAR_2++)
  FUNC_0(VAR_2, VAR_0->gtt_sa_bitmap);

 FUNC_3(&VAR_0->gtt_sa_lock);

 FUNC_1(VAR_1);
 return 0;
}
