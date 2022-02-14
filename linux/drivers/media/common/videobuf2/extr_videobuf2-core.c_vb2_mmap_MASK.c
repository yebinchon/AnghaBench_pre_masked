
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; int vm_flags; unsigned long vm_end; unsigned long vm_start; } ;
struct vb2_queue {scalar_t__ memory; int mmap_lock; struct vb2_buffer** bufs; scalar_t__ is_output; } ;
struct vb2_buffer {TYPE_1__* planes; } ;
struct TYPE_2__ {int mem_priv; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vb2_queue*,unsigned long,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct vb2_buffer*,int ,int ,struct vm_area_struct*) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct vb2_queue*) ;

int FUNC_7(struct vb2_queue *VAR_8, struct vm_area_struct *VAR_9)
{
 unsigned long VAR_10 = VAR_9->vm_pgoff << VAR_2;
 struct vb2_buffer *VAR_11;
 unsigned int VAR_12 = 0, VAR_13 = 0;
 int VAR_14;
 unsigned long VAR_15;

 if (VAR_8->memory != VAR_3) {
  FUNC_3(1, "queue is not currently set up for mmap\n");
  return -VAR_1;
 }




 if (!(VAR_9->vm_flags & VAR_5)) {
  FUNC_3(1, "invalid vma flags, VM_SHARED needed\n");
  return -VAR_1;
 }
 if (VAR_8->is_output) {
  if (!(VAR_9->vm_flags & VAR_6)) {
   FUNC_3(1, "invalid vma flags, VM_WRITE needed\n");
   return -VAR_1;
  }
 } else {
  if (!(VAR_9->vm_flags & VAR_4)) {
   FUNC_3(1, "invalid vma flags, VM_READ needed\n");
   return -VAR_1;
  }
 }

 FUNC_4(&VAR_8->mmap_lock);

 if (FUNC_6(VAR_8)) {
  FUNC_3(1, "mmap: file io in progress\n");
  VAR_14 = -VAR_0;
  goto unlock;
 }




 VAR_14 = FUNC_1(VAR_8, VAR_10, &VAR_12, &VAR_13);
 if (VAR_14)
  goto unlock;

 VAR_11 = VAR_8->bufs[VAR_12];






 VAR_15 = FUNC_0(VAR_11->planes[VAR_13].length);
 if (VAR_15 < (VAR_9->vm_end - VAR_9->vm_start)) {
  FUNC_3(1,
   "MMAP invalid, as it would overflow buffer length\n");
  VAR_14 = -VAR_1;
  goto unlock;
 }






 VAR_9->vm_pgoff = 0;

 VAR_14 = FUNC_2(VAR_11, VAR_7, VAR_11->planes[VAR_13].mem_priv, VAR_9);

unlock:
 FUNC_5(&VAR_8->mmap_lock);
 if (VAR_14)
  return VAR_14;

 FUNC_3(3, "buffer %d, plane %d successfully mapped\n", VAR_12, VAR_13);
 return 0;
}
