
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline_hwsp {unsigned long long free_bitmap; int free_link; int vma; struct intel_gt_timelines* gt_timelines; } ;
struct intel_gt_timelines {int hwsp_lock; int hwsp_free_list; } ;


 int FUNC_0 (unsigned long long) ;
 unsigned long long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_timeline_hwsp*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct intel_timeline_hwsp *VAR_0, int VAR_1)
{
 struct intel_gt_timelines *VAR_2 = VAR_0->gt_timelines;
 unsigned long VAR_3;

 FUNC_7(&VAR_2->hwsp_lock, VAR_3);


 if (!VAR_0->free_bitmap)
  FUNC_5(&VAR_0->free_link, &VAR_2->hwsp_free_list);

 FUNC_2(VAR_1 >= FUNC_0(VAR_0->free_bitmap));
 VAR_0->free_bitmap |= FUNC_1(VAR_1);


 if (VAR_0->free_bitmap == ~0ull) {
  FUNC_3(VAR_0->vma);
  FUNC_6(&VAR_0->free_link);
  FUNC_4(VAR_0);
 }

 FUNC_8(&VAR_2->hwsp_lock, VAR_3);
}
